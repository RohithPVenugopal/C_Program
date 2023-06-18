/* Start, stop value */
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the starting value: ");
    scanf("%d",&a);
    printf("Enter the ending value: ");
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
    {
        printf("%d\n",i);
    }
}