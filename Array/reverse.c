#include <stdio.h>
int main()
{
    int i;
    int arr[4]={1,2,3,4};
    printf("the original order:");
    for(i=0;i<4;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("the reverse order:");
    for(i=3;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
