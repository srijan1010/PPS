#include<stdio.h>
void main()
{
    float n,cf,i,sr=0;
    printf("enter the no of coins\n");
    scanf("%d",&n);
    printf("Enter the circumference \n");
    scanf("%d",&cf);
    float r;
    r=cf/2*3.14;
    if(n*(n+1)%2==0)
    {
        for(i=1;i<=n;i++)
        {
            if(i==1 && i==n)
            sr=sr+r;
            else
            sr=sr+2*r;
        }
        area=(1.73/4)*sr*sr;
        printf("Area of triangle formed %d\n",area);
    }
    else
    {
    printf("-1\n");
    }
}