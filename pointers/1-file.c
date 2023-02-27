#include <stdio.h>

int main(void)
{
	int myNum;
	char myChar;
	char deen[7]; 

	printf("Type a number And a character and press enter: \n");
	scanf("%d %c %s", &myNum, &myChar, deen);

	if (myNum > 10)
	{
		printf("%d is the number\n", myNum);
		printf("%c is the Character\n%s is the string\n", myChar, deen);
	}
	else
		printf("Give me the right number:\n");

	return(0);
}

