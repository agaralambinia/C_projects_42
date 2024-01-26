/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:57:23 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 19:02:03 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	ssrc;
	size_t	i;

	if (!dst || !src)
		return (0);
	ssrc = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ssrc);
}
/*
Аргументы:
dst – указатель на строку, в которую будут скопированы данные.
src – указатель на строку источник копируемых данных.

Возвращаемое значение:
Функция возвращает указатель на строку, в которую скопированы данные.

Описание:
Функция копирует данные из строки, на которую указывает аргумент src,
в строку, на которую указывает аргумент dst, пока не встретится символ конца
строки (нулевой символ). Копирование производится вместе с символом конца строки.

Если строки перекрываются, результат копирования будет не определен.
*/
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char s[] = "12345678902345678";
	char dest[10];
	memset(dest, 'A', 10);
	ft_strlcpy(dest, s, 7);
	printf("5 %c\n", dest[4]);
}
*/