#include <stdio.h>
#include <stdlib.h>
#define DEEN 1000

int main(int argc, char* argv[])
{
	int sum;
	int i;

	sum = 0;
	i = 1;
	if (argc == 1)
	{
		return(0);
	}
	while (argc > i)
	{
		sum += atoi(argv[i]);
		printf("%d in address %p + %d = %d\n",atoi(argv[i]), &argv[i], atoi(argv[i-1]), sum);
		i++;
	}
	printf("\nNumber of arguments is %d and sum = %d\n",argc, sum);
	return(0);
}
