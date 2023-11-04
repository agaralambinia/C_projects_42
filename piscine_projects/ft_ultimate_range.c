#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
	int a = -2147483647;
	int b = 2147483647;
	int i = 0;
	int *p;
	printf("%d; ", ft_ultimate_range(&p, a, b));
	while (i < b-a)
	{
		printf("%d; ", p[i]);
		i++;
	}
}
*/