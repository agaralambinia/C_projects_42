void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
int main()
{
	int tab[] = {356789,456789,456789,56789,45678,0};
	ft_foreach(tab, 6, &ft_putnbr);
}
*/