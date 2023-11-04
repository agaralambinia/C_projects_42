#include <stdlib.h>
/*
#include <stdio.h>

int summa(a)
{
	return (a+5);
}
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	res = (int *) malloc((length) * sizeof(int));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}
/*
int main()
{
	int a[] = {1};
	int i = 0;
	int *res;
	res = ft_map(a, 1, &summa);
	while (i < 1)
	{
		printf("%d\n", res[i]);
		i++;
	}
}
*/