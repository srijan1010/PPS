#include<stdio.h>
void main()
{
    int mid,s,c,n,i,sum1=0,sum2=0,rem=0;
    printf("Enter the odd digit number\n");
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    n=s;
    mid=c/2;
    for(i=0;i<mid;i++)
    {
        rem=n%10;
        sum1=sum1+rem;
        n=n/10;
    }
    rem=0;
    n=n/10;
    for(i=mid+1;i<c;i++)
    {
        rem=n%10;
        sum2=sum2+rem;
        n=n/10;
    }
    if(sum1==sum2)
    printf("The number is balanced-number\n");
    else
    printf("The number is not balanced-number");
}