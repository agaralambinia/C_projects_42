#ifndef PRINTF_H
#define PRINTF_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "./lib_ft/libft.h"

int ft_printf(const char *f, ...);
int print_conv(char c, va_list ap);
int ft_putchar(int c);
int ft_putstr(char *str);
int ft_putnbr_base(long nbr, int base);
#endif