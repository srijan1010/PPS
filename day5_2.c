#include<stdio.h>
int darkness(int arr[],int n)
{
      int c=0,j;
    int i,max=arr[0];
    for(i=0;i<n;i++)
    {
            if(max<arr[i])
            max=arr[i];
          
        }
    
   
    printf("%d",max);
    }


void main()
{
    int n,i;
    int arr[100];
    printf("Enter the no of candles candles\n");
    scanf("%d",&n);
    printf("Enter the size of candles \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    darkness(arr,n);
}