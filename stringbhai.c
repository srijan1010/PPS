#include<stdio.h>
#include<string.h>
void main()
{
    char str[10],s1[5],s2[5];
    int i,l,len;
int c=0;
    printf("Entr the string to check\n");

    gets(str);
    printf("enter the length of the string\n");
    scanf("%d",&l);
   i=0;int e=0;
   while(i<l/2)
    {
        s1[i]=str[e];
        i++;e++;
    }
    s1[i]='\0';
    printf("%s",s1);
  i=0;
  len=l/2;
  while(len<l)
  {
    s2[i]=str[len];i++;len++;
  }
  s2[len]='\0';
   printf("\n%s\n",s2);
   int d=l/2;
   //printf("%d",d);
   i=0;
   
   while(s1[i]!='\0')
   {
    
    i++;
   }
   printf("%d\n",i);
for(i=0;i<d;i++)
{
    if(s1[i]==s2[i])
    c++;
    printf("%d-%d\n",i,c);
}
//printf("%d",c);
//len=l/2;
if(c==d)
printf("same");
else
printf("different");
}