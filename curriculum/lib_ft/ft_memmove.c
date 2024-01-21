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

void	*ft_memmove(void *restrict dst, const void *restrict src, size_t n)
{
	char	*ndst;
	char	*nsrc;
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (dst);
	ndst = (char *)dst;
	nsrc = (char *)src;
	if (dst > src)
	{
		while (n--)
			ndst[n] = nsrc[n];
	}
	else
	{
		while (i++ < n)
			ndst[i] = nsrc[i];
	}
	return (dst);
}
