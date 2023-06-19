/* 2 Dimenssional array with user input and addition */
#include<stdio.h>
int main()
{
    int a[2][3],b[2][3],c[2][3];
    printf("Enter the elements of 1st array:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd array:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf("\n");
    printf("1st Array");
    printf("\n");
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("2nd Array");
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("3rd Array= 1st Array+ 2nd Array");
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
             c[i][j]=a[i][j]+b[i][j];
             printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
}