/* Star pattern with nested loop */
#include<stdio.h>
void main()
    {
        int a,i,j;
        printf("Star value: ");
        scanf("%d",&a);
        for(i=0;i<=a;i++)
        {
            for(j=0;j<i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }