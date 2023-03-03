#include<stdio.h>
int main()
{
    int a[50],size,i;
    printf("Enter the Number of elements:\n");
    scanf("%d",&size);
    printf("Enter the Elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    if(size>50)
    {
        printf("stack is Full:\n");
    }
    return 0;

}