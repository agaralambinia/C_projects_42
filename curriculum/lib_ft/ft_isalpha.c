int	ft_isalpha(char str)
{
	if ((97 <= str && str <= 122) || (65 <= str && str <= 90))
		return (1);
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_isalpha(NULL));
}