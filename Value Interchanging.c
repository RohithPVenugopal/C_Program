/* Value interchanging */
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Value of a: %d",a);
    printf("\nValue of b: %d",b);
}