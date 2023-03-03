#include<stdio.h>

int main()
{
    int a[50];
    int size,i;
    printf("Enter the Number of elements:\n");
    scanf("%d",&size);
    printf("Enter the Elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Number of elements:\n");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}