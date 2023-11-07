#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
int	    ft_isalpha(char str);
int	    ft_isdigit(char str);
int	    ft_isalnum(char str);
int     ft_isascii(char str);
int     ft_isprint(char str);
int	    ft_strlen(char *str);
void    *ft_memset(void *s, int c, size_t len);
void    ft_bzero(void *s, size_t n);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
size_t	ft_strlcat(char *dst, const char *src, size_t l);
int     ft_atoi(char *str);

#endif