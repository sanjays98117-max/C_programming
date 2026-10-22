#include<stdio.h>
int main()
{
	int a;
	int *ptr;
	printf("enter the num:");
	scanf("%d",&a);
	ptr=&a;
	printf("the address of a:%p\n",ptr);
	return 0;
}
