#include <stdio.h>

enum access_type {
	ACC_READ,
	ACC_WRITE
};

const char get_type (int num) {
	switch(num){
		case 0: printf("ACC_READ\n");
		case 1: printf("ACC_WRITE\n");
		default: printf("None\n");
	}
}

int main(int argc, char** argv)
{
	printf("test=%s\n", get_type(0));
}
