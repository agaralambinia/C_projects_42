#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
int	    ft_isalpha(char str);
int	    ft_isdigit(char str);
int	    ft_isalnum(char str);
int     ft_isascii(char str);
int     ft_isprint(char str);
size_t	ft_strlen(const char *str);
void    *ft_memset(void *s, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *restrict dst, const void *restrict src, size_t n);
char    ft_strlcpy(char *dst, const char *src, size_t dstsize);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
size_t	ft_strlcat(char *dst, const char *src, size_t l);
char    ft_toupper(char c);
char    ft_tolower(char c);
int     ft_atoi(char *str);

#endif