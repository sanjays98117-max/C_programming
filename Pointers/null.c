#include<stdio.h>
int main()
{
	int *p=NULL;

	if(p == NULL)
	{
		printf("its is a null ptr");
	}
	else
	{
		printf("%d\n",*p);
	}
	return 0;
}
