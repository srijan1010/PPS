#include<stdio.h>
#include<math.h>
void main()
{
    int c,rem,num,i;
    int x,y,k;
    printf("Enter the number to find the kth digit\n");
    scanf("%d%d",&x,&y);
    num=pow(x,y);
    k=num;
    c=0;
    while(num>0)
    {
        c++;
    }
    num=k;
    printf("you have %d choices, choose any one\n");
    scanf("%d",&k);
    k=c;
    for(i=1;i<k;i++)
    {
        num=num/10;
    }
    printf("Your kth digit is %d",num);
}
