#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    if(x%7==0)
    printf("number is divisible by 3 or 7");
    else if(x%3==0)
    printf("number is divisible by 3 or 7");
    else
    printf("Number is not divisble by 3 or 7");
    return 0;
}