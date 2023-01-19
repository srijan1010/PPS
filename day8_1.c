#include<stdio.h>
#include<math.h>
void main()
{
    int d,a,b,c,sum=0,x,y;
    printf("Enter the coefficient of x^2, x, constant\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(2*a*c);
    if(d>0)
    {
        x=(-b+sqrt(d))/2*a;
        y=(-b-sqrt(d))/2*a;
        printf("Roots are real and they are %d %d",x,y);
    }
    else if(d==0)
    {
        x=-b/(2*a);
        y=-b/(2*a);
        printf("Roots are real and they are %d %d",x,y);
    }
    else 
    printf("The roots are imaginary\n");
}