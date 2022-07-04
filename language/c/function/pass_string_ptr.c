#include <stdio.h>


// arg_charp -> call by reference
// arg_int -> call by value
void func1(int arg_int, char* arg_charp)
{
	printf("[%s]%d %s\n",__func__, arg_int, arg_charp);
	arg_int = 10;
	sprintf(arg_charp, "%s\n", "hi");
	printf("[%s]%d %s\n",__func__, arg_int, arg_charp);
}

int main(int argc, char** argv)
{

	int arg_int=0;
	char arg_charp[30]="hello";
	printf("[%s]%d %s\n", __func__, arg_int, arg_charp);
	func1(arg_int, arg_charp);
	printf("[%s]%d %s\n",__func__, arg_int, arg_charp);
	
	return 0;
}
