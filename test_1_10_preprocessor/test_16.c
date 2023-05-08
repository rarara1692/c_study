#include <stdio.h>

typedef int bool_t; 
typedef bool_t (*less_than_func_t)(int, int);


bool_t less_than(int a, int b)
{
	return a <  b ? 1 : 0;
}


bool_t less_than_modular(int a, int b)
{
	return (a % 5) < (b % 5) ? 1 : 0;
}



int main()
{
	less_than_func_t func_ptr = NULL;
	int result = 0;

	func_ptr = &less_than;
	result = func_ptr(3,7);
	printf("%d\n", result);


	func_ptr = &less_than_modular;
	result = func_ptr(3,7);
	printf("%d\n", result);

	return 0;
}
