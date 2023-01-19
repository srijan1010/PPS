#include<stdio.h>
void main()
{
    int n,i,j,c=0;
    printf("Enter the number to print its all prime factors\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        for(j=2;j<=i;j++)
        {
                c=0;
            
            if(n%i==0)
            {
            if(i%j==0)
            {
                c++;
            }
            }
      if(c==1)
        printf("%d\n",i);
    }
}
}