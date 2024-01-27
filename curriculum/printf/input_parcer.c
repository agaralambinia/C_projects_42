#include <printf.h>

int argcount(const char *s)
{
    int len;
    int i;

    len = 0;
    i = 0;
    while (s[i+1] != '\0')
    {
        if ((s[i] == 37) && (s[i+1] != 37))
            len++;
        i++;
    }
    return (len);
}