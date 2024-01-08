
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10][10],i,j,r,n,trans[10][10];
    printf("Enter the no. of rows and columns: ");
    scanf("%d %d",&r,&n);
    printf("enter the element of the matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[j][i]=a[i][j];
        }
    }
    printf("\nThe transpose of the above matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
