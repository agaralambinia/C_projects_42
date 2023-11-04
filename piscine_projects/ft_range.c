#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (NULL);
	p = (int *) malloc((max - min) * sizeof(int));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
/*
#include <stdio.h>
int main()
{
	int a = -214;
	int b = 214;
	int i = 0;
	int *p = ft_range(a,b);
	while (i < b-a)
	{
		printf("%d; ", p[i]);
		i++;
	}
}
*/