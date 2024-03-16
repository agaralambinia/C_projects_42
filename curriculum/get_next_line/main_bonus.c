#include "get_next_line.h"

int main()
{
    int fd1, fd2, fd3, fd4;
    char	*line;
    fd1 = open("t1", O_RDONLY);
    fd2 = open("t2", O_RDONLY);
    fd3 = open("t3", O_RDONLY);
    fd4 = open("t4", O_RDONLY);

	while ((line = get_next_line(fd1)))
	{
		printf("%s", line);
		free(line);
	}
    line = get_next_line(fd2);
    printf("%s", line);
	free(line);
    line = get_next_line(fd3);
    printf("%s", line);
	free(line);
    line = get_next_line(fd4);
    printf("%s", line);
	free(line);
    line = get_next_line(fd2);
    printf("%s", line);
	free(line);
    line = get_next_line(fd3);
    printf("%s", line);
	free(line);
    line = get_next_line(fd4);
    printf("%s", line);
	free(line);
    line = get_next_line(fd2);
    printf("%s", line);
	free(line);
    line = get_next_line(fd3);
    printf("%s", line);
	free(line);
    line = get_next_line(fd4);
    printf("%s", line);
	free(line);
    line = get_next_line(fd2);
    printf("%s", line);
	free(line);
    line = get_next_line(fd3);
    printf("%s", line);
	free(line);
    line = get_next_line(fd4);
    printf("%s", line);
	free(line);

	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	return (0);
}