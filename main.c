#include "get_next_line.h"

int	main(void)
{
	ssize_t fd;
	char *test;

	fd = open("text.txt", O_RDONLY);
	// fd = open("gnlTester/files/multiple_line_no_nl", O_RDONLY);
	do
	{
		test = get_next_line(fd);
		puts("----- MAIN -----");
		printf("%s\n", test);
		if (test)
			free(test);
	}while (test != NULL);
	// if (test)
	// 	free(test);
	close(fd);
	// scanf("%c");
	return (0);
}