/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:20:54 by defimova          #+#    #+#             */
/*   Updated: 2024/01/28 21:20:56 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list	ap;
	int		cnt;

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
	return (cnt);
}
