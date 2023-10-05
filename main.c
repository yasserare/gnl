#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"


int main(){

	int fd = open("file.txt", O_RDONLY);
	char	*line;

	line = get_next_line(fd);
	printf("the line is => {%s}\n", line);
	return (0);
}
