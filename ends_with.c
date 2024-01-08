

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5],i;
    printf("----Enter only 1's and 0's----");
    printf("\nEnter the input string: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    if(a[4]==0 && a[3]==0 && a[2]==0)
    {
        printf("this string ends with 000");
    }
    else
    {
        printf("this string doesn't end with 000");
    }

 

    return 0;
}
