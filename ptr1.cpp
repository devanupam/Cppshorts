#include<stdio.h>
int main()
{
	int a = 5;
	int * const ptr;
	ptr = &a;
	*ptr = 10;
	printf("%d\n", a);
	return 0;
}