#include <stdio.h>

int main(void)
{
	FILE* fptr;

	fptr = fopen("2-file.c", "r");

	if (fptr == NULL)
		printf("Nothing to read\n");
	char good[1024];
	while (fgets(good, 1024, fptr))
		printf("%s\n", good);
	fclose(fptr);
	return(0);
}
