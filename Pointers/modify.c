#include<stdio.h>
int main()
{
	int x;
	printf("enter the value:");
	scanf("%d",&x);
	int *p=&x;
	int **q=&p;
	printf("before modify:%d\n",x);
	**q=200;
	printf("after modify:%d\n",x);
	return 0;
}
