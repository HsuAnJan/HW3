#include<stdio.h>
#include<stdlib.h>

long fa(long nu);

int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%2d!=%1d\n", i, fa(i));
	}
	system("pause");
	return 0;
}

long fa(long n)
{
	if (n <= 1)
		return 1;
	else
		return(n*fa(n - 1));
}