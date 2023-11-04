#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define SUCCESS 0
# define EVEN(n) n % 2 == 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# include <unistd.h>

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

#endif