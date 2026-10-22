#include<stdio.h>
int main()
{
	int a=12;
	int *ptr;
	ptr=&a;
	printf("the value a using *ptr:%d\n",*ptr);
	return 0;
}
