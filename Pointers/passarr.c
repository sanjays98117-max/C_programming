#include<stdio.h>
void printarray(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
}
int main()
{
	int arr[5]={10,20,30,40,50};
	printarray(arr,5);
	return 0;
	}

