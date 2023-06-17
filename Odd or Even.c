/* Odd/Even */
#include <stdio.h>

int main()
{
    int a;
    while(1)
    {
        printf("\nEnter the number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }
    }
}
