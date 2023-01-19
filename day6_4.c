#include <stdio.h>
void main()
{
    int a[3][3],m,n;
    int i,j,c[3][3];
    printf("enter the size of array\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of array\n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
   for(i=0;i<m;i++)  
     {
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
     }
     printf("Matrix in 180 degree clock wise rotation\n");
     for(i=2;i>=0;i--)
     {
      for(j=0;j<n;j++)
      c[i][j]=a[i][j];
     }
     for(i=2;i>=0;i--)
     {
      for(j=0;j<n;j++)
      c[i][j]=a[j][i];
     }
     for(i=2;i>=0;i--)
     {
      for(j=0;j<n;j++)
      printf("%d ",c[i][j]);
      printf("\n");
     }
     
}