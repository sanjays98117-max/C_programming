#include<stdio.h>
int main()
{
	float num1,num2,result;
	char operator;
	printf("Enter the num1:");
	scanf("%f",&num1);
	printf("Enter the operator:");
	scanf(" %c",&operator);
	printf("Enter the num2:");
	scanf("%f",&num2);
	switch (operator)
	{
		case'+':
		result=num1+num2;
		printf("result=%.2f\n",result);
		break;
		case'-':
		result=num1-num2;
		printf("result=%.2f\n",result);
		break;
		case'*':
		result=num1*num2;
		printf("result=%.2f\n",result);
		break;
		case'/':
		if(num2!=0)
		{
			result=num1/num2;
			printf("result=%.2f\n",result);
		}
		else
		{
			printf("cannot divide by zero\n");
		}
		break;
		default:
		printf("invalid operator\n");
	}
	return 0;
}

