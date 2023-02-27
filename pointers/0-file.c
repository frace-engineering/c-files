#include <stdio.h>


void add(int a, int b)
{
	printf("%d + %d = %d\n",a, b, a + b);
}
void sub(int a, int b)
{
	printf("%d - %d = %d\n",a, b, a - b);
}

void mul(int a, int b)
{
	printf("%d * %d = %d\n",a, b, a * b);
}
void div(int a, int b)
{
	printf("%d / %d = %d\n",a, b, a / b);
}
void mod(int a, int b)
{
	printf("%d %% %d = %d\n",a, b, a % b);
}
void expo(int a, int b)
{
	int i;
	int expo = a;
	if (b == 0)
		expo = 1;
	if (b == 1)
		expo = a;
	for (i = 2; i <= b; i++)
		expo *= a;
	printf("%d ^ %d = %d\n",a, b, expo);
}

int main(void)
{
	add(19, 15);
	sub(19, 15);
	mul(19, 15);
	div(19, 15);
	mod(19, 15);
	expo(10, 10);
	return(0);
}
