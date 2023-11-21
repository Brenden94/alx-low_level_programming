// libmy.c

#include "main.h"
#include <unistd.h>

// _putchar writes a character to stdout
int _putchar(char c) {
    return write(1, &c, 1);
}

// _islower checks if a character is lowercase
int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

// _isalpha checks if a character is alphabetic
int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// _abs computes the absolute value of an integer
int _abs(int n) {
    return (n < 0) ? -n : n;
}

// _isupper checks if a character is uppercase
int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

// _isdigit checks if a character is a digit
int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

// _strlen computes the length of a string
int _strlen(char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

// _puts writes a string to stdout
void _puts(char *s) {
    while (*s != '\0') {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}

// _strcpy copies a string
char *_strcpy(char *dest, char *src) {
    char *original_dest = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate the destination string
    return original_dest;
}

// _atoi converts a string to an integer
int _atoi(char *s) {
    int i = 0, sign = 1, result = 0;
    if (s[0] == '-') {
        sign = -1;
        i++;
    }
    while (s[i] != '\0') {
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return sign * result;
}

// _strcat concatenates two strings
char *_strcat(char *dest, char *src) {
    char *original_dest = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate the concatenated string
    return original_dest;
}

// _strncat concatenates n characters from src to dest
char *_strncat(char *dest, char *src, int n) {
    char *original_dest = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    *dest = '\0';  // Null-terminate the concatenated string
    return original_dest;
}

// _strncpy copies up to n characters from src to dest
char *_strncpy(char *dest, char *src, int n) {
    char *original_dest = dest;
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    while (n > 0) {
        *dest = '\0';  // Pad with null characters if n is greater than the length of src
        dest++;
        n--;
    }
    return original_dest;
}

// _strcmp compares two strings
int _strcmp(char *s1, char *s2) {
    while (*s1 == *s2) {
        if (*s1 == '\0') {
            return 0;  // Strings are equal
        }
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

// _memset sets the first n bytes of s to the specified value
char *_memset(char *s, char b, unsigned int n) {
    while (n > 0) {
        *s = b;
        s++;
        n--;
    }
    return s;
}

// _memcpy copies n bytes from src to dest
char *_memcpy(char *dest, char *src, unsigned int n) {
    char *original_dest = dest;
    while (n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    return original_dest;
}

// _strchr locates the first occurrence of a character in a string
char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}

// _strspn calculates the length of the initial segment of s consisting of only characters from accept
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s != '\0' && _strchr(accept, *s) != NULL) {
        count++;
        s++;
    }
    return count;
}

// _strpbrk searches s for any of the characters in accept
char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (_strchr(accept, *s) != NULL) {
            return s;
        }
        s++;
    }
    return NULL;
}

// _strstr locates a substring
char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *start = haystack;
        char *sub = needle;
        while (*haystack != '\0' && *sub != '\0' && *haystack == *sub) {
            haystack++;
            sub++;
        }
        if (*sub == '\0') {
            return start;
        }
        haystack = start + 1;
    }
    return NULL;
}

