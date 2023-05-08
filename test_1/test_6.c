#include <stdio.h>

int main()
{
	char str[100] = {0,};
	printf("input data >> ");
	scanf("%s", str);


	printf(#str);
}
