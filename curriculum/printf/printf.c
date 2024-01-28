#include "printf.h"

int ft_printf(const char *f, ...)
{
    va_list ap;
    int     cnt;

    va_start(ap, f);
    cnt = 0;
    while (*f)
    {
        if (*f == '%')
            cnt += print_conv(*(++f), ap);
        else
            cnt += write(1, f, 1);
        f++;
    }
    return cnt;
}
