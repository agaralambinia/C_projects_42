/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:52:42 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 18:56:18 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;

	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	if (!src && !dst)
		return (dst);
	if (dst > src)
	{
		while (n--)
			ndst[n] = nsrc[n];
	}
	else
	{
		while (n--)
			*ndst++ = *nsrc++;
	}
	return (dst);
}
