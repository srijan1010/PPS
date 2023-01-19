#include<stdio.h>
void chocolate(int a[],int n)
{
    int i,mid,f=0;
    if(l%2==0)
    {
        mid=(f+l)/2;
    }
    else
    {
        mid=(f+l)/2;
    }
    printf("%d",a[mid]);
}
void main()
{
    int a[100],i,n;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    chocolate(a,n);
}