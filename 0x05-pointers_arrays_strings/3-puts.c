
/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 *
 * Description: The function prints the string followed by a new line.
 * Return: void.
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != 0)
    {
        _putchar(str[i]);
        i++;
    }
    _putchar(n);
}
