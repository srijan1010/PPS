#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10],str2[10];
    printf("Enter two strings\n");
    gets(str1);
    gets(str2);
        if(strcmp(str1,str2)==0)
        
        printf("strings are same");
        else
printf("strings are different");
}
/*#include<stdio.h>
#include<string.h>
void main()
{
    char str[10],s1[5],s2[5];
    int i,l;
    printf("Entr the string to check\n");

    gets(str);
    printf("enter the length of the string\n");
    scanf("%d",&l);
   i=0;
   len=l/2;
   while(str[i]!='\0' && i<len)
    {
        s1[i]=str[i];
        i++;
    }
    s1[len]='\0';
    i=len;
   while(str[i]!='\0' && i<l)
    {
        s2[i]=str[i];
        i++;
    }
    s2[l]='\0';
    printf("%s %s",s1,s2);
}*/