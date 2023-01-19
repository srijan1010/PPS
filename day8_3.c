#include<stdio.h>
void main()
{
    int rem,n,sum=0;
    printf("Enter the number \n");
    scanf("%d",&n);//let the number be 98
    while(n>0)
    {
        rem=n%10;//the remainder is first 8 and then 9
        sum=sum+rem;//the sum will be 17
        n=n/10;//now n = 0
        if(n==0)
         {
            if(sum>10)//here if sum is > 10
            {
                n=sum;//n=17
            }   
        }
    }
    printf("Your sum is %d",sum);
}