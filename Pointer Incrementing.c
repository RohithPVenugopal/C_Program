/*Pointer Incrementing*/
#include<stdio.h>
const int MAX=3;
int main()
{
int var[]={10,20,30};
int i,*ptr;
ptr=&var;
for(i=0;i<MAX;i++)
{
    printf("Address of var[%d]:%x\n",i,ptr);
    printf("Value of var[%d]:%d\n",i,*ptr);
    ptr ++;
}
return 0;
}
