#include<stdio.h>
void main()
{
    int n,i,s,k=0,rem=0,sum=0,sum1=0;
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        rem=n%10;
        sum1+=rem;
        n=n/10;
    }
    n=s;
    rem=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {         
                s=i;
                while(s>0)
                {
                    rem=s%10;
                    sum+=rem;
                    s=s/10;
                }
        if(sum1>sum)
            {
                    k=n;
            }
        else if(sum1==sum)
            {
               k=i;
            }
        else {
                k=i;
            }
        }
        else {
        k=n;
        }
    }
    printf("%d",k);
 
}
