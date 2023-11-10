char    *ft_strchr(const char *s, int c)
{
    if (!s)
        return (0);
    while (*s != '\0' && c != *s)
        s++;
    if (c == *s)
        return ((char *)s);
    return (0);
}