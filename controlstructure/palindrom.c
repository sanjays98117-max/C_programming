#include<stdio.h>
int main()
{
	int original=121,reverse,remainder,num;
	original=num;
	while(num!=0)
	{
		remainder=num%10;
		reverse=reverse*10+remainder;
		num=num/10;
	}
	if(original==reverse)
	{
		printf("its a palindrom\n");
	}
	else
	{
		printf("its not a palindrom\n");
	}
	return 0;
}
