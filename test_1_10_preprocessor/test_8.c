#include <stdio.h>

#define LOOP_3(x, ...) \
	printf("%s\n\n\n",#x);

#define LOOP_2(x, ...) \
	printf("%s\n",#x); \
	LOOP_3(__VA_ARGS__)
	

#define LOOP_1(x, ...) \
	printf("%s\n",#x); \
	LOOP_2(__VA_ARGS__)


#define LOOP(x, ...) \
	printf("%s\n",#x); \
	LOOP_1(__VA_ARGS__)


int main(int argc, char **argv)
{
	LOOP(copy pste cut);
	LOOP(copy,past,cut);
	LOOP(copy,past,cut,select);
	LOOP(copy,past,cut,select,bye);
}



