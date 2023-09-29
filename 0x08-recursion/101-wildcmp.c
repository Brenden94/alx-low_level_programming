#include "main.h"

int wildcmp(char *s1, char *s2)
{
    {
            return (wildcmp(s1, s2 + 1));
        while (*s1)
        {
            if (wildcmp(s1, s2 + 1))
                return (1);
            s1++;
        }
    }
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }
    return (0);
}
