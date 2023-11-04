#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, int start, int end)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

int	search(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*filline(char *str, char *charset, int s)
{
	int		n;
	int		i;
	int		end;
	char	*cur;

	n = 0;
	i = 0;
	end = 0;
	while (search(str[i], charset) == 1)
		i++;
	while (n != s)
	{
		if (search(str[i], charset) && !(search(str[i + 1], charset)))
			n++;
		i++;
	}
	end = i;
	while (!search(str[end], charset) && (str[end + 1] != '\0')
		&& !search(str[end + 1], charset))
		end++;
	cur = (char *)malloc((end - i + 2) * sizeof(char));
	if (cur == NULL)
		return (NULL);
	ft_strcat(cur, str, i, end);
	return (cur);
}

int	lens(char *str, char *charset)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (search(str[i], charset) && (str[i + 1] != '\0'))
		i++;
	while (str[i] != '\0')
	{
		if (!search(str[i], charset) && (((search(str[i + 1], charset)))
				|| (str[i + 1] == '\0')))
			len++;
		i++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		len;

	i = 0;
	len = lens(str, charset);
	result = (char **)malloc((len + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = filline(str, charset, i);
		i++;
	}
	result[i] = 0;
	return (result);
}
/*
#include <stdio.h>
int main()
{	
	char str[] = "2345678jklkkkk3456789kkk";
	char c[] = "jkl";
	int i;
	char **result;

	i = 0;
	result = ft_split(str, c);
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		i++;
	}
}
*/