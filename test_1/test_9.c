#include <stdio.h>


//#define CONDITION 


int main()
{
	int i = 0;
	int j = 0;
	#ifdef CONDITION 
		j++;
	#endif


	printf("%d %d\n", i,j);
	return 0;
}
