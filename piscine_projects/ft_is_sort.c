/*
#include <stdio.h>
int	checker(int a, int b)
{
	if (a == b)
		return (0);
	else if (a < b)
		return (-1);
	else
		return (1);
}
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	p;
	int	n;
	int	i;

	p = 0;
	n = 0;
	i = 0;
	if (length < 0)
		return (0);
	else if ((length >= 0) && (length <= 2))
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			p++;
		else if ((*f)(tab[i], tab[i + 1]) < 0)
			n++;
		i++;
	}
	if ((p != 0) && (n != 0))
		return (0);
	return (1);
}
/*
int main()
{
	int a[] = {};
	printf("%d\n", ft_is_sort(a, -1, &checker));
}
*/