#include<stdio.h>
int main()
	{
		int num=56789;
		int count=0;
		while(num!=0)
		{
			num=num/10;
			count++;
		}
		printf("The number of digits:%d\n",count);
		return 0;
	}

