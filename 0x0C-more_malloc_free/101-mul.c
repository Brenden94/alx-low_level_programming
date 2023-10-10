#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\\n");
        return (98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    /*
     * Implement your multiplication logic here.
     * You may need to use atoi or strtol to convert strings to integers.
     * Be sure to handle invalid inputs as described in the task.
     */

    /*
     * Print the result followed by a newline.
     */
    printf("%d\\n", result);

    return (0);
}
