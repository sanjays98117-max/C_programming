#include<stdio.h>
struct std {int id;char name[50];float marks;};
int main()
{
	struct std s;
	printf("Enter the id:");
	scanf("%d",&s.id);
	printf("Enter the name:");
	scanf("%s",s.name);
	printf("Enter the marks:");
	scanf("%f",&s.marks);
	printf("\n----student details----\n");
	printf("Id:%d\n",s.id);
	printf("name:%s\n",s.name);
	printf("marks:%f\n",s.marks);
	return 0;
}
