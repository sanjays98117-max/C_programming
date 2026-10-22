#include<stdio.h>
void calculate(int x, int y, int *quotient, int *remainder)
{
	*quotient=x/y;
	*remainder=x%y;
}
int main()
{
	int a=17,b=5;
	int quotient,remainder;
        calculate( a, b, &quotient , &remainder);
	printf("quotient=%d\n",quotient);
	printf("remainder=%d\n",remainder);
	return 0;
}


