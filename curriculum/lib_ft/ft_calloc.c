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
	void	*dst;

	if (count && size && count > (2147483647 / size))
		return (NULL);
	dst = malloc(count * size);
	if (!dst)
	{
		free(dst);
		return (NULL);
	}
	ft_bzero(dst, count * size);
	return (dst);
}