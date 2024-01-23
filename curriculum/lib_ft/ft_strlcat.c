/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:02:26 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 19:07:13 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	i;
	size_t	dst_len;

	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < l)
		dst_len++;
	i = dst_len;
	while (src[dst_len - i] && dst_len + 1 < l)
	{
		dst[dst_len] = src[dst_len - i];
		dst_len++;
	}
	if (i < l)
		dst[dst_len] = '\0';
	return (i + ft_strlen(src));
}