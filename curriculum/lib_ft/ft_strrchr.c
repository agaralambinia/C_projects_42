/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:15:01 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 19:16:58 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	if (!s)
		return (0);
	temp = s;
    while (*s)
        s++;
    while (s >= temp)
        if (*s-- == (char)c)
            return ((char *)s + 1);
	return (0);
}