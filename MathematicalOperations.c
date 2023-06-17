#include<stdio.h>
void main()
{
    int A,S,M,D,x,y,z;
    printf("Enter both values: ");
    scanf("%d\n%d",&x,&y);
    A=x+y;
    S=x-y;
    D=x/y;
    M=x*y;
    printf("Which operation to perform:");
    scanf("%d",&z);
    if(z='A')
    {
        printf("Addition: ",A);
    }
    else if(z='S')
    {
        printf("Subtraction: ",S);
    }
    else if(z='M')
    {
        printf("Multiplication: ",M);
    }
    else if(z='D')
    {
        printf("Division: ",D);
    }
    else
    {
        printf("Invalid function!");
    }


}