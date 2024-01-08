#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArm(int );
int main()
{
    int a;
    printf("enter some number: ");
    scanf("%d",&a);
    if(isArm(a))
        printf("%d is an armstrong number.\n",a);
    else
        printf("%d is not an armstrong number.\n",a);
    return 0;
}

bool isArm(int num)
{
    int sum=0,temp=num,k,count=0;
    while(temp!=0)
    {
        count++;
        k=temp%10;
        temp=temp/10;
    }
    
    for(i=num;i>0;i/=10)
    {
        k=i%10;
        sum=sum+pow(k,count);
    }
    if(sum==num)
        return true;
    else
        return false;
}

