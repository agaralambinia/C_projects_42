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
	int			len;
	const char	*temp;

	if (!s)
		return (0);
	temp = s;
	len = ft_strlen(s);
	s = (s + len);
	while ((*s != *temp) && (c != *s))
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
