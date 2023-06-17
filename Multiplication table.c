/* Multiplication table */
#include<stdio.h>
void main()
{
 int a,i,s;
 printf("Enter the value to get its Multiplication table: ");
 scanf("%d",&a);
 for(i=1;i<=10;i++)
 {
     s=a*i;
     printf("%d*%d= %d\n",a,i,s);
 }
}