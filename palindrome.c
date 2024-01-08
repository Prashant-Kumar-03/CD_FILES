#include <stdio.h>


int main()
{
    int num,rev=0,temp,rem;
    printf("enter some number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==num)
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
    
    
    return 0;
}
