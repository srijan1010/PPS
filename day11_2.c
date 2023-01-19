#include<stdio.h>
void main()
{
    long a[1000],n,i,sum=0;
    printf("Enter the numbers\n");
    scanf("%d",&n);
    printf("Enter the numbers to check if it is divisible by 3 \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(sum%3==0)
    printf("Yes");
    else
    printf("No");
}