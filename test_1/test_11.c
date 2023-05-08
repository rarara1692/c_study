#include <stdio.h>


int main(int argc, char **argv)
{
	int var = 1;

	int *int_ptr = NULL;
	int_ptr = &var;

	char *char_ptr = NULL;
	char_ptr = (char*)&var;


	printf("%p %p\n",int_ptr, char_ptr);

	int_ptr++;
	char_ptr++;

	printf("%p %p\n", int_ptr, char_ptr);
}
