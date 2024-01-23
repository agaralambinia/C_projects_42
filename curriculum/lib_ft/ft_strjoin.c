/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:39:11 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 19:40:57 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*conc;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	conc = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!conc)
		return (NULL);
	i = 0;
	while (*s1)
		conc[i++] = *s1++;
	while (*s2)
		conc[i++] = *s2++;
	conc[i] = '\0';
	return (conc);
}
