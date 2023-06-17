/* do,while,continue,break */
#include<stdio.h>
int main()
    {
        int a=10;
        do{
            if(a==15)
            {
                a=a+1;
                continue;
            }
            if(a==25)
            {
                break;
            }
            printf("%d \n",a);
            a++;
        }
        while(a<30);
        return 0;
        
    }