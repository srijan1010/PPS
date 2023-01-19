#include<stdio.h>
int subarray(int a[],int n)
{
    int sa[5],sb[5],i,mid,sum1=0,sum2=0;
    mid=n/2;
    for(i=0;i<mid;i++)
    {
        sa[i]=a[i];
        sum1=sum1+sa[i];
    }
    for(i=mid+1;i<n;i++)
    {
        sb[i]=a[i];
        sum2=sum2+sb[i];
    }
    i=sum1*sum2;
        printf("The multiplication of sum of two arrays are %d",i);
}
void main()
{
    int a[10];int n,i;
    printf("Enter the no of elements \n");
    scanf("%d",&n);
    printf("Enter elements of array A\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    subarray(a,n);
}