#include <stdio.h>


int main(int argc, char **argv)
{
	int var = 100;
	int *ptr = &var;

	printf("%d\n",*ptr);

	*ptr += 4;


	printf("%d\n", var);

}
