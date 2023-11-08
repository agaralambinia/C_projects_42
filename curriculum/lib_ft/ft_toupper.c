char    ft_toupper(char c)
{
    if (!c)
        return (0);
    if ((c >= 97) && (c <= 122))
        return (c - 32);
    return (c);
}