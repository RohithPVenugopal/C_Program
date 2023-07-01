/*Pointer Decrementing*/
#include<stdio.h>
const int MAX=3;
int main()
{
int var[]={10,20,30};
int i,*ptr;
ptr=&var[MAX-1];
for(i=MAX;i>0;i--)
{
    printf("Address of var[%d]:%x\n",i-1,ptr);
    printf("Value of var[%d]:%d\n",i-1,*ptr);
    ptr --;
}
return 0;
}