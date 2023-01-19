#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("1 ");
    for(i=2;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                if(j!=1)
                printf("%d ",j);
            }
        }
    }
}