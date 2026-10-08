#include<stdio.h>
int main()
{
	int a[10]={10,54,45,78,98,56,32,26,55,20};
	int largest,i;
	for(i=1;i<10;i++)
	{
		if(a[i]>largest)
		{
			largest=a[i];
		}
	}
	printf("The largest number is : %d\n",largest);
	return 0;
}

