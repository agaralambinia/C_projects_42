/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:02:27 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 20:46:50 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += 1;
		n /= -1;
	}
	while (n > 0)
	{
		len ++;
		n /= 10;
	}
	return (len);
}

int	set_nbr(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	int		nbr;

	if (n == -2147483648)
	{
		res = "-2147483648";
		return (res);
	}
	len = ft_len(n);
	res = (char *)malloc((len) * sizeof(char));
	if (!res)
		return (NULL);
	nbr = set_nbr(n);
	*(res + len) = '\0';
	while (nbr > 0)
	{
		*(res + len-- - 1) = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n == 0)
		*res = '0';
	else if (n < 0)
		*res = '-';
	return (res);
}
