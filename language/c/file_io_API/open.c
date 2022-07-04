#include <fcntl.h>

int main()
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	char *filename = "./open.txt";

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, mode);
}
