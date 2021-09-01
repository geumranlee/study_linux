#include <stdio.h>
#include <pthread.h>	// pthread_t, pthread_create()
#include <unistd.h>	// sleep()
#include <stdlib.h>	// malloc()
#include <string.h>	// memset()
#include <sys/mman.h>	// mmap()

int main(int argc, char** argv)
{
	void* buf;

	if (argc < 2){
		void *buf;

		printf("memoryhogger using malloc\n");
		while(1){
			sleep(1);
			buf = malloc(1024*1024);
			printf("after malloc(), %p\n", buf);
			memset(buf, '2', 1024*1024);
		}
	} else {
		printf("memoryhogger using mmap\n");
		while(1) {
			sleep(1);
			buf = mmap(NULL, 1*1024*1024, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE | MAP_POPULATE , -1, 0);
			if(buf == (void *)-1)
				printf("%p\n",buf);
			else
				memset(buf,1,sizeof(buf));
		}
	}

	return 0;
}
