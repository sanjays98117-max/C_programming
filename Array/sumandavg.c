#include<stdio.h>
int main()
{
	int a[5]={10,20,12,15,13};
	int i,sum;
	float average;
	sum=0;
	for (i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	average=(float)sum/5;
	printf("The sum of array is : %d\n",sum);
	printf("The average of array is : %.2f\n",average);
	return 0;
}
