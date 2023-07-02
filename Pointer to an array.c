/* Pointer to an array*/
#include<stdio.h>
int main()
{
    double balance[5]={100.0,92.5,60.5,74.6,82.0};
    double *p;
    int i;
    p=balance;
    printf("Array value using pointer\n");
    for(i=0;i<5;i++)
    {
        printf("*(p+%d):%f\n",i,*(p+i));
    }
    printf("Array value using balance as address\n");
    for(i=0;i<5;i++)
    {
        printf("*(balance+%d):%f\n",i,*(balance+i));
    }
}