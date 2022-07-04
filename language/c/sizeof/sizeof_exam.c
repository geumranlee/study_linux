#include <stdio.h>
#include <stdlib.h>

struct exam{
	int a;
	int b;
	char c;
};

int main(int argc, char** argv)
{
	char arr[64] = {0,};
	char arr2[64] = "hello world";
	struct exam ex;
	struct exam *pex;
	int *ptr;

	printf("sizeof(arr[64]) = %ld\n",sizeof(arr));
	printf("sizeof(ex) = %ld\n",sizeof(ex));
	printf("sizeof(pex) = %ld\n",sizeof(pex));
	printf("sizeof(ptr) = %ld\n",sizeof(ptr));
	printf("sizeof(arr2[64]) = %ld\n",sizeof(arr2));

	ptr = (int *)malloc(64);

	printf("after pointing malloced area, sizeof(ptr) = %ld\n",sizeof(ptr));

	return 0;
}
