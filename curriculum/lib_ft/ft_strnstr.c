/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:23:41 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 19:26:59 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (0);
	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[i + j] == '\0' && needle[j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
/*
Аргументы:
haystack – указатель на строку, в которой ведется поиск.
needle – указатель на искомую строку.
len - максимальная длина строки, в которой ведется поиск.

Возвращаемое значение:
NULL – если строка needle не входит в строку needle.
Указатель на первое вхождение строки needle в строку haystack.

Описание:

Функция ft_strnstr ищет первое вхождение строки (за исключением признак конца
строки), на которую указывает аргумент needle, в строку , на которую указывает
аргумент haystack. Если строка needle имеет нулевую длину, то функция вернет
указатель на начало строки haystack.
*/
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char haystack[30] = "aaabcabcd";
	printf("%d\n", ft_strnstr(haystack, "aabc", 10) == haystack + 1);
	printf("%d\n", ft_strnstr(haystack, "aabc", 0) == 0);
	printf("%d\n", ft_strnstr(haystack, "aaabc", 5) == haystack);
	printf("%d\n", ft_strnstr(haystack, "abcd", 9) == haystack + 5);
	printf("%d\n", ft_strnstr("1", "a", 1) == NULL);
}
*/