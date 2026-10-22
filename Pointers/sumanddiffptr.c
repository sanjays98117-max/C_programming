#include<stdio.h>
void calculate(int x,int y,int *sum,int *difference)
{
	*sum=x+y;
	*difference=x-y;
}

int main()
{
	int a=100,b=20;
	int sum,difference;
        calculate(a, b, &sum, &difference);
	printf("the sum of:%d\n",sum);
	printf("the difference of:%d\n",difference);
	return 0;
}
