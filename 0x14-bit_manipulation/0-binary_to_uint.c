#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return 0;

        result = (result << 1) + (*b - '0');
        b++;
    }

    return result;
}

int main()
{
    const char *binary1 = "1101";
    const char *binary2 = "1010";
    const char *binary3 = "1234"; // Invalid binary

    printf("Binary: %s, Decimal: %u\n", binary1, binary_to_uint(binary1));
    printf("Binary: %s, Decimal: %u\n", binary2, binary_to_uint(binary2));
    printf("Binary: %s, Decimal: %u\n", binary3, binary_to_uint(binary3));

    return 0;
}
