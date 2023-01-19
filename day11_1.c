#include<stdio.h>
void main()
{
    int x1,x2,y1,y2;
    printf("Enter the value of x1,x2,y1,y2\n");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    double m = (y2-y1) / (x2-x1);
    int i,j,c=0;
    int sum1=0,sum=0;
    for(i=x1;i<=x2;i++)
    {
        for(j=y2;j<=y1;j++)
        {
            sum = j-y1;
            sum1 = m*(i-x1);
            if(sum == sum1)
            c++;
        }
    }
    printf("\n%d",c);
}