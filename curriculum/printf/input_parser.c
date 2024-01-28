#include "printf.h"

int print_conv(char c, va_list ap)
{
    int cnt;

    cnt = 0;
    if (c == 'c')
        cnt += ft_putchar(va_arg(ap, int));
    else if (c == 's')
        cnt += ft_putstr(va_arg(ap, char *));
    /*
    else if (c == 'p')
        cnt += ft_putvoid(va_arg(ap, void *));
    */
    else if (c == 'd')
        cnt += ft_putnbr_base((long)va_arg(ap, int), 10);
    /*
    else if (c == 'i')
        cnt += print_int(va_arg(ap, int));
    else if (c == 'u')
        cnt += print_uns(va_arg(ap, int));
    */
    else if (c == 'x')
        cnt += ft_putnbr_base((long)va_arg(ap, unsigned int), 16);
    /*
    else if (c == 'X')
        cnt += up(print_d(va_arg(ap, unsigned int), 16));
    */
    else if (c == '%')
        cnt += write(1, &c, 1);
    /*else
        //ОШИБКА?
    */
    return (cnt);
}