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
/*
Аргументы:
s – указатель на строку, в которой будет осуществляться поиск.
c – код искомого символа.

Возвращаемое значение:
Указатель на искомый символ, если он найден в строке s, иначе NULL.

Описание:

Функция strchr ищет последнее вхождения символа,
код которого указан в аргументе c,
в строке, на которую указывает аргумент s.
*/
/*
#include <stdio.h>
int	main()
{
	char s[] = "ft_strrchr";
	printf("trrchr %s\n", ft_strrchr(s, 't'));
	printf("NULL %s\n", ft_strrchr(s, 'o'));
}
*/