#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int *ptr;
    int largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    largest = *ptr;

    for(i = 1; i < n; i++)
    {
        if(*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    printf("Largest = %d\n", largest);

    return 0;
}
