#include "printf.h"

int ft_putchar(int c)
{
    return (write(1, &c, 1));
}

int ft_putstr(char *str)
{
    int cnt;

    cnt = 0;
    while (*str)
    {
        cnt += ft_putchar((int)*str);
        ++str;
    }
    return (cnt);
}

int ft_putnbr_base(long nbr, int base)
{
    char    *dict_l;

    dict_l = "0123456789abcdef";
    //добавить верхний
    if (nbr < 0)
        return (ft_putchar('-') + ft_putnbr_base(-nbr, base));
    else if (nbr < base)
        return (ft_putchar(dict_l[nbr]));
    else
    {
        return (ft_putnbr_base(nbr / base, base) + ft_putnbr_base(nbr % base, base));
    }
}