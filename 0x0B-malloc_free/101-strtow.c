#include <stdio.h>
#include <stdlib.h>

int is_separator(char c, char *separators);

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 * @separators: Characters used as word separators.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str, char *separators) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (is_separator(*str, separators)) {
            if (in_word) {
                in_word = 0;
                count++;
            }
        } else {
            in_word = 1;
        }
        str++;
    }

    if (in_word) {
        count++;
    }

    return count;
}

/**
 * is_separator - Check if a character is a separator.
 * @c: The character to check.
 * @separators: Characters used as word separators.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c, char *separators) {
    while (*separators) {
        if (c == *separators) {
            return 1;
        }
        separators++;
    }
    return 0;
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: An array of strings (words) or NULL if it fails.
 */
char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    char *separators = " \t\n";
    int num_words = count_words(str, separators);
    if (num_words == 0) {
        return NULL;
    }

    char **words = malloc(sizeof(char *) * (num_words + 1));
    if (words == NULL) {
        return NULL;
    }

    int in_word = 0;
    int word_len = 0;
    int word_index = 0;

    while (*str) {
        if (is_separator(*str, separators)) {
            if (in_word) {
                words[word_index] = malloc(word_len + 1);
                if (words[word_index] == NULL) {
                    for (int i = 0; i < word_index; i++) {
                        free(words[i]);
                    }
                    free(words);
                    return NULL;
                }
                in_word = 0;
                word_len = 0;
                word_index++;
            }
        } else {
            if (!in_word) {
                in_word = 1;
            }
            word_len++;
        }
        str++;
    }

    if (in_word) {
        words[word_index] = malloc(word_len + 1);
        if (words[word_index] == NULL) {
            for (int i = 0; i <= word_index; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
    }

    str = str - word_len;

    in_word = 0;
    word_len = 0;
    word_index = 0;

    while (*str) {
        if (is_separator(*str, separators)) {
            if (in_word) {
                words[word_index][word_len] = '\0';
                in_word = 0;
                word_len = 0;
                word_index++;
            }
        } else {
            if (!in_word) {
                in_word = 1;
            }
            words[word_index][word_len] = *str;
            word_len++;
        }
        str++;
    }

    if (in_word) {
        words[word_index][word_len] = '\0';
    }

    words[num_words] = NULL;
    return words;
}
