

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5],i,flag=0;
    printf("----Enter only 1's and 0's----");
    printf("\nEnter the input string: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==1 && a[+1]==0 && a[i+2]==1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("It contains substring 101");
    }
    else
    {
        printf("It doesn't contain substring 101");
    }
    return 0;
}
