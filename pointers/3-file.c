#include <stdio.h>

//function that opens a file

int main(void)
{
	FILE* ftmp;

	ftmp = fopen("2-file.c", "r");

	if (ftmp == NULL)
		printf("Nothing to show");
	if ("4-file.c" == "")
		printf("-------\n--------\n");
	char buff[4];
	while(fgets(buff, 4, ftmp))
		printf("%s", buff);
	fclose(ftmp);
	return(0);
}

