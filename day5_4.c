#include<stdio.h>
int swap(int a[],int n)
{
    int i,mid;
    for(i=0;i<n;i++)
    {
        a[i]=a[n-1-i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void main()
{
   int a[10],n,i;
   printf("Enter the size of the array\n");
   scanf("%d",&n);
   printf("Enter the elements of array a\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   swap(a,n);
}