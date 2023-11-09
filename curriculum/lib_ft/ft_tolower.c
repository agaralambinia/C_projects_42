char    ft_tolower(char c)
{
    if (!c)
        return (0);
    if ((c >= 65) && (c <= 90))
        return (c + 32);
    return (c);
}