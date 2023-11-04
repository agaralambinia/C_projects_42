#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_put(int t, char **conc, char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		(*conc)[t] = str[j];
		j++;
		t++;
	}
	return (t);
}

char	*ft_size(int size, char *sep, char **strs)
{
	int		i;
	int		m_size;
	char	*conc;

	i = 0;
	m_size = 0;
	while (i < size)
	{
		m_size += ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		m_size += (size) * ft_strlen(sep);
	conc = (char *) malloc((m_size + 1) * sizeof(char));
	return (conc);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		m_size;
	int		i;
	int		t;
	char	*conc;

	m_size = 0;
	i = 0;
	t = 0;
	conc = ft_size(size, sep, strs);
	if (conc == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		t = ft_put(t, &conc, strs[i]);
		if (i < size - 1)
			t = ft_put(t, &conc, sep);
		i++;
	}
	conc[t] = '\0';
	return (conc);
}
/*
#include <stdio.h>
int	main()
{
	char *str[] = {"Kak", "reshit", "neboskryoby", "nxn?"};
	char *str1[] = {};
	printf("%s", ft_strjoin(4, str, "!!!!!!!!!!!!!!!!!!!!!!"));
}
*/