#include "get_next_line.h"

int main()
{
    int fd1;
    char	*line;
    fd1 = open("t1", O_RDONLY);

	while ((line = get_next_line(fd1)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd1);
	return (0);
}