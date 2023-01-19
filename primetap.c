#include<stdio.h>
int prime(int x,int y)
{
    int i,j,prime;
    for(i=x;i<=y;i++)
    {
        prime=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=1;
                break;
            }
        }
       if(prime==0)
       printf("%d ",i);
    }

}
void main()
{
    int  x,y;
    printf("Enter the lower limit\n");
    scanf("%d",&x);
    printf("Enter the upper limit\n");
    scanf("%d",&y);
    prime(x,y);
}