#include<stdio.h>
void main()
{
    int c=0,i,rem=0;
    int f=1;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    while(f>0)
    {
        rem=f%10;
        if(rem!=0)
        {
            break;
        }
        else if(rem==0)
        {
            c++;
            f=f/10;
        }
    }
    printf("%d ",c);
}