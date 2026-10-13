#include<stdio.h>
int main()
{
	int n,i,j,a[100];
	int currentsum,maxsum;
	printf("enter the number of elememts:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	currentsum=a[0];
	maxsum=a[0];
	for(i=1;i<n;i++)
	{
		if(currentsum+a[i]>a[i])
		{
			currentsum=currentsum+a[i];
		}
		else
		{
			currentsum=a[i];
		}
		if(currentsum>maxsum)
		{
			maxsum=currentsum;
		}
	}
	printf("the maxsum is = %d\n",maxsum);

	return 0;
}

