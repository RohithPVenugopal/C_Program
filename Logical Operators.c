/*Logical Operators*/
#include<stdio.h>
void main()
{
    int a,b;
    while(1)
    {
        printf("\nEnter the value of a= ");
        scanf("%d",&a);
        printf("Enter the value of b= ");
        scanf("%d",&b);
        if(a&&b)
       {
        printf("Condition obeys AND function");
       }
        else
       {
        printf("Condition doesn't obeys AND function");
       }
    
        if(a||b)
       {
        printf("\nCondition obeys OR function");
       }
        else
       {
        printf("\nCondition doesn't obeys OR function");
       }
    }
}