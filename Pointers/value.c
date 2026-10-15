#include<stdio.h>
int main()
{
	int num,*ptr;
	printf("enter a number:");
	scanf("%d",&num);
	ptr=&num;
	printf("The num value=%d\n",num);
	printf("The address=%p\n",ptr);
	printf("The value using pointer=%d\n",*ptr);
	return 0;
}
