#include<stdio.h>
int main()
{
	int a[5],i;
	int *p;
	int largest , smallest;
	printf("enter  the elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	largest=*p;
	smallest=*p;
	for(i=1;i<5;i++)
	{
		p++;
		if(*p>largest)
		{
			largest=*p;
		}
		if(*p<smallest)
		{
			smallest=*p;
		}
	}
	printf("largest=%d\n",largest);
	printf("smallest=%d\n",smallest);
	return 0;
}
