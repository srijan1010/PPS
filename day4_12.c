#include<stdio.h>
int catAndMouse(int x, int y, int z) {
   
        int d1,d2;
d1=z-x;
d2=z-y;
if(d1<0)
{
    d1=-d1;
   
}
if(d2<0)
{
     d2=-d2;
}
if(d1>d2)
printf("Cat B\n");
else if(d2>d1)
printf("Cat A\n");
else if(d1==d2)
printf("Mouse C\n");

    return 0;
}
int main()
{
     int q,x,y,z;
    scanf("%d",&q);
    while(q--)
    {
scanf("%d%d%d",&x,&y,&z);
        
        catAndMouse(x,y,z);
    }
}