int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((97 <= str[i] && str[i] <= 122) || (65 <= str[i] && str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    //char *str = "A";
    //printf("%d\n", ft_isalpha(str));
    printf("%d\n", isalpha('K'));   
}