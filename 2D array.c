/* 2 dimenssional array */
#include<stdio.h>
void main()
{
    int r,c;
    int a[2][3]={{1,2,3},{4,5,6}};
    printf("Enter the number of row: ");
    scanf("%d",&r);
    printf("Enter the number of column: ");
    scanf("%d",&c);
    printf("%d",a[r][c]);
}