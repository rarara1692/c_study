#include <stdio.h>

#define PRINT(a) printf("%d\n", a);
#define LOOP(a,b,c) for (int a = b; a <=c; a++) {
#define END_LOOP }



int main()
{
	LOOP(counter,1,10)
		PRINT(counter)
	END_LOOP
	return 0;
}
