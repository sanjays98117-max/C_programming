#include<stdio.h>
int main()
{
	int x=10;
	int *p=&x;
	int **q=&p;
	printf("ptr to ptr:%d\n",**q);
	return 0;
}

