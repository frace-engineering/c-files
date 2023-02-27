#include <stdio.h>

int main(void)
{
	FILE* fnew;

	fnew = fopen("friday.txt", "w");
	char arr[] = "Who am i? Where have I been? What must have happened to my girl";
	fprintf(fnew, "%s\n", arr);

	return(0);
}
