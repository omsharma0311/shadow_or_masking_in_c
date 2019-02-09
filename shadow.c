#include<stdio.h>
int main()
{
	int b=10;
	{
		int b=20;
		printf("%d",b);
	}
	printf("%d",b);
	return 0;
}