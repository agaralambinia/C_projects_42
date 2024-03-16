#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <ctype.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <stddef.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*read_remember(int fd, char *buf);
char	*get_ln(char *buf);
char	*buf_move(char *buf);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_calloc(size_t n, size_t size);

#endif