/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:21:30 by defimova          #+#    #+#             */
/*   Updated: 2024/01/28 21:21:31 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./lib_ft/libft.h"

int	ft_printf(const char *f, ...);
int	print_conv(char c, va_list ap);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	nbrb(long nbr, int base, int d);
int ft_putp(unsigned long int nbr);
#endif
