#include <stdio.h>
#include <string.h>

#define CMD(NAME) \
	char NAME ## _cmd[256] = ""; \
	strcpy(NAME ## _cmd , #NAME);

int main(int argc, char **argv)
{
	CMD(copy);
	CMD(paste);
	CMD(cut);

	char cmd[256];
	scanf("%s",cmd);

	if(strcmp(cmd, copy_cmd) == 0)
	{
		printf("cmd = copy ok ? \n");
	}
	else if(strcmp(cmd, paste_cmd) == 0)
	{
		printf("cmd = paste ok ? \n");
	}
	else if(strcmp(cmd, cut_cmd) == 0)
	{
		printf("cmd = cut ok? \n");
	}
	else
	{
		printf("cmd = KNOWN Sorry\n");
	}

	return 0;

}
