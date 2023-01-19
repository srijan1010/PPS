 #include<stdio.h>
#include<math.h>
void main()
{
    int i,n;
    scanf("%d",&n);
   for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {  
            printf("%d\n",i); 
        }
    }
}