#include<stdio.h>
int main()
{
	int a[100],i,j,n,targetvalue;
	printf("enter the number elements:");
	scanf("%d",&n);
	printf("Enter the targetvalue:");
	scanf("%d",&targetvalue);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==targetvalue)
			{
				printf("%d %d\n",i,j);
			}
		}
	}	
	return 0;
}
