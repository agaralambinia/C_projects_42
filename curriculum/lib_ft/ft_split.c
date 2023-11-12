#include "libft.h"

int	lens(char const *str, char charset)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while ((str[i] == charset) && (str[i + 1] != '\0'))
		i++;
	while (str[i] != '\0')
	{
		if (!(str[i] == charset) && ((str[i + 1] == charset)
				|| (str[i + 1] == '\0')))
			len++;
		i++;
	}
	return (len);
}

char	*ft_strc(char *dest, char const *src, int start, int end)
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

char	*filline(char const *l, char c, int s)
{
	int		n;
	int		i;
	char	*cur;

	n = 0;
	i = 0;
	while (l[i] == c)
		i++;
	while (n != s)
	{
		if (l[i] == c && !(l[i + 1] == c))
			n++;
		i++;
	}
	n = i;
	while (!(l[n] == c) && (l[n + 1] != '\0') && !(l[n + 1] == c))
		n++;
	if (!(cur = (char *)malloc((n - i + 2) * sizeof(char))))
    {
		return (NULL);
        free(cur);
    }
	ft_strc(cur, l, i, n);
	return (cur);
}

char    **ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		len;

	if (!s)
        return (NULL);
    i = 0;
	len = lens(s, c);
	result = (char **)malloc((len + 1) * sizeof(char *));
	if (result == NULL)
    {
		return (NULL);
        free(result);
    }
	while (i < len)
	{
		result[i] = filline(s, c, i);
		i++;
	}
	result[i] = 0;
	return (result);
}