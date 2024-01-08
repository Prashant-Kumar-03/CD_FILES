#include <stdio.h>

#include <math.h>

int main()
{
    int num,i,sum=0,temp,k,count=0;
    printf("enter some number: ");
    scanf("%d",&num);
    temp=num;
    
    
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
        printf("%d is an armstrong number.\n",num);
    else
        printf("%d is not an armstrong number.\n",num);

    return 0;
}
