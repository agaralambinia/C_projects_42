/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:27:31 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 19:28:08 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isspace_check(const char a)
{
	if ((a == ' ') || (a == '\n') || (a == '\t') || (a == '\v')
		|| (a == '\f') || (a == '\r'))
	{
		return (1);
	}
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	i = 0;
	res = 0;
	if (!str)
		return (0);
	while (isspace_check(str[i]))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = (-1) * sign;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		res = res * 10 - 48 + str[i];
		i++;
	}
	return (res * sign);
}
/*
Аргументы:
str – указатель на строку, которую необходимо преобразовать в число.

Возвращаемое значение:
Функция возвращает число - результат преобразование строки, если в начале строки содержится число.
Если в начале строки стоит символ не являющейся цифрой, то функция возвращает ноль.

Описание:
Функция преобразует строку, на которую указывает аргумент str, в число типа int.
Преобразование заканчивается, когда встречается символ не являющейся цифрой или
когда будет преобразована вся строка.
Если первый символ строки не цифра, то функция вернет 0 и завершит работу.
Если число в строке превышает максимальный или минимальный размер числа типа int,
то функция возвращает соответственно максимально или минимально допустимое число для типа int.
Пробельные символы в начале строки допустимы и обрабатываются ((c > 8 && c < 14) || (c == 32))
*/
/*
#include <stdio.h>
#include <string.h>
#include <limits.h>
int	main()
{
	printf("0 %d\n", ft_atoi(""));
	printf("1 %d\n", ft_atoi("1"));
	printf("-1 %d\n", ft_atoi("-1"));
	printf("0 %d\n", ft_atoi("--1"));
	printf("1 %d\n", ft_atoi("+1"));
	printf("0 %d\n", ft_atoi("++1"));
	printf("1 %d\n", ft_atoi("   2147483647") == INT_MAX);
	printf("1 %d\n", ft_atoi("     -2147483648") == INT_MIN);
	printf("1 %d\n", ft_atoi("1wew4444df"));
	printf("0 %d\n", ft_atoi("ewfwfw1"));
}
*/