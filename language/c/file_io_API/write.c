#include <stdio.h>         // printf()
#include <string.h>        // strlen()
#include <fcntl.h>         // O_WRONLY
#include <unistd.h>        // write(), close()

int main()
{
	char *temp = "wewakecorp\n";
	char temp2[4096] = {0,};
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
   	int fd;
	int i=5;

	//printf("hello world\n");
   	fd = open("./test.txt", O_CREAT | O_WRONLY, mode );
   	if (0 < fd)
   	{
		while (1) {
		//while (i--) {
			sleep(1);
      			write(fd, temp, strlen(temp));
			//printf("%s", temp);
			//fsync(stdout);
		}
      		close(fd);
   	}
   	else
	{
		printf("file open failed.\n");
	}
   	return 0;
}
