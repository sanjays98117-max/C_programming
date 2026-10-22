#include<stdio.h>
int main()
{
	int x=10;

	int *p=&x;
	printf("the value of x=%d\n",x);
	printf("the diff of &x=%p\n",p);
	printf("the diff of *p=%d\n",*p);
	return 0;
}
