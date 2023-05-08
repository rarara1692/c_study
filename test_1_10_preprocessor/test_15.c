#include <stdio.h>

int sum(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}


int main(int argc, char **argv)
{
	int (*func_ptr)(int, int);

	func_ptr = NULL;

	func_ptr = &sum;
	int result = func_ptr(5,4);
	printf("%d\n", result);

	func_ptr = &sub;
	result = func_ptr(5,4);
	printf("%d\n", result);
	
}
