#include <stdio.h>
#include <stdlib.h>

char **strtow(char *str);

/**
 * print_words - Print an array of words.
 * @words: The array of words to print.
 */
void print_words(char **words) {
    if (words == NULL) {
        return;
    }
    for (int i = 0; words[i] != NULL; i++) {
        printf("%s\n", words[i]);
    }
}

int main(void) {
    char **words;

    words = strtow("      Holberton School         #cisfun      ");
    if (words == NULL) {
        return (1);
    }
    print_words(words);
    return (0);
}
