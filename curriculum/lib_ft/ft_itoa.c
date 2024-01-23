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
	if (n <= 0)
		len += 1;
		n /= -1;
	while (n)
	{
		len ++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	nbr;

	len = ft_len(n);
	nbr = n;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (nbr < 0)
	{
		res[0] = '-';
		nbr /= -1;
	}
	if (nbr == 0)
		res[0] = '0';
	res[len--] = '\0';
	while (nbr > 0)
	{
		res[len] = nbr % 10 + '0';
		len--;
		nbr = nbr / 10;
	}
	return (res);
}
