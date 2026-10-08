#include<stdio.h>
int main()
{
	int a[10]={12,11,51,54,89,13,55,52,10,85};
	int i,even=0,odd=0;
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("The number of even number=%d\n",even);
	printf("the number of odd numbers=%d\n",odd);
	return 0;
}
