/* Digit Addition */
#include<stdio.h>
void main()
{
    int a,b,s;
    printf("Enter the value: ");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        s=s+b;
        a=a/10;
    }
    printf("Added value of the digit: %d",s);
}