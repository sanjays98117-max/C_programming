#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	int i,j;
	int palindrom=1;
	printf("enter the string:");
	scanf("%s",str);
	j=strlen(str);
	for(i=0;i<j;i++)
	{
		str[i]=tolower(str[i]);
	}
	for(i=0;i<j/2;i++)
	{
		if(str[i]!=str[j-i-1])
		{
			palindrom=0;
			break;
		}
	}
	if(palindrom==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}



