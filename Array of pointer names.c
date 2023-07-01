/* Array of pointer names*/
#include<stdio.h>
const int MAX=5;
int main()
{
char *names[]=
{
    "Abhijith",
    "Aravindh",
    "Indrajith",
    "Prithviraj",
    "Vishnu"
};
int i=0;
for(i=0;i<MAX;i++)
{
    printf("Value of names[%d]=%s\n",i,names[i]);
}
return 0;
}
