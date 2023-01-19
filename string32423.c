#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str[10],s[5];
  int  i=0,l;
    printf("enter string\n");
    gets(str);
    printf("enter the length of string\n");
    scanf("%d",&l);
 memcpy(s,str,l/2);
 printf("%s",s);
}