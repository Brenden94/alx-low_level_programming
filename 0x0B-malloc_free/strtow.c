#include <stdlib.h>

int count_words(char *str);

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words) or NULL if it fails.
 */
char **strtow(char *str) {
    int i, j, k = 0, len = 0, words = 0;
    char **word_array;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    words = count_words(str);

    word_array = malloc(sizeof(char *) * (words + 1));

    if (word_array == NULL)
        return (NULL);

    for (i = 0; i < words; i++) {
        while (str[k] == ' ' || str[k] == '\t' || str[k] == '\n')
            k++;
        len = 0;
        while (str[k + len] != ' ' && str[k + len] != '\t' && str[k + len] != '\n' && str[k + len] != '\0')
            len++;
        word_array[i] = malloc(sizeof(char) * (len + 1));
        if (word_array[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(word_array[j]);
            free(word_array);
            return (NULL);
        }
        for (j = 0; j < len; j++)
            word_array[i][j] = str[k++];
        word_array[i][j] = '\0';
    }
    word_array[i] = NULL;
    return (word_array);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str) {
    int i, words = 0;
    char prev_char = ' ';

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && (prev_char == ' ' || prev_char == '\t' || prev_char == '\n' || prev_char == '\0'))
            words++;
        prev_char = str[i];
    }

    return (words);
}
