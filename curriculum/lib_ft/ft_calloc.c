/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:31:06 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 19:33:20 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	countsize;
	void	*dst;

	countsize = count * size;
	dst = malloc(countsize);
	if (!dst)
		return (0);
	ft_memset(dst, 0, countsize);
	return (dst);
}
