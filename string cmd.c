/*
strcpy(s1,s2); -copies string s2 into string s1
strcat(s1,s2); -concatenates string s2 into the end of string s1
strlen(s1); -returns the length of string s1
strcmp(s1,s2); -returns 0 if s1 & s2 are same, less than 0 if s1<s2, greater than 0 if s1>s2
strchr(s1,ch); -returns a pointer to the first occurence of character ch in string s1
strstr(s1,s2); -returns a pointer to the first occurence of string s2 in string s1
*/
#include <string.h>
#include <stdio.h>
void main()
{
    char str1[12]="Hello";
    char str2[13]=" World";
    char str3[13];
    int len;
    strcpy(str3,str1);
    printf("strcpy(str1,str2): %s\n",str3);
     
     strcat(str1,str2);
     printf("strcat(str1,str2): %s\n",str1);
     
     len= strlen(str1);
     printf("strlen(str1): %d\n",len);
}