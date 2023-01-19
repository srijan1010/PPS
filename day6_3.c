#include <stdio.h>
void main()
{
    int a[3][3],m,n;
    int i,j;
    printf("enter the size of array\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of array\n");
    for(i=0;i<m;i++)
{
    for (j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
    
}
