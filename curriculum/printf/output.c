/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:20:41 by defimova          #+#    #+#             */
/*   Updated: 2024/01/28 21:20:43 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		cnt += ft_putchar((int)*str);
		++str;
	}
	return (cnt);
}

int	nbrb(long nbr, int base, int d)
{
	char	*dup[2];

	dup[0] = "0123456789abcdef";
	dup[1] = "0123456789ABCDEF";
	if (nbr < 0)
		return (ft_putchar('-') + nbrb(-nbr, base, d));
	else if (nbr < base)
		return (ft_putchar(dup[d][nbr]));
	else
	{
		return (nbrb(nbr / base, base, d) + nbrb(nbr % base, base, d));
	}
}

int	ft_putp(long nbr)
{
	int	cnt;

	cnt = ft_putstr("0x");
	cnt += nbrb(nbr, 16, 0);
	return (cnt);
}
