#include<stdio.h>
struct employee
{
	int id;
	float salary;
	char department[20];
};
int main()
{
	int i,max=0;
	struct employee e[5];
	for(i=1;i<=5;i++)
	{
	printf("\nEnter the employee details:%d\n",i);
	printf("Enter the id:");
	scanf("%d",&e[i].id);
	printf("Enter the salary:");
	scanf("%f",&e[i].salary);
	printf("Enter the department:");
	scanf("%s",e[i].department);
	}
	for(i=1;i<=5;i++)
	{
		if(e[i].salary>e[max].salary)
		{
			max=i;
		}
	}
	printf("\nEmployee with higest salary\n");
	printf("ID:%d\n",e[max].id);
	printf("Salary:%f\n",e[max].salary);
	printf("Department:%s\n",e[max].department);
	return 0;
}


