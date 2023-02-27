#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE* ftmp;
	int i;

	ftmp = fopen("friday.txt", "a");
	for (i = 1; i <= argc; i++)
	{
		if (argv[i] == NULL)
			break;
		fprintf(ftmp, "%s ", argv[i]);
	}
	return(0);
}
