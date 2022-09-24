#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    if(x%6==0)
    printf("Number is divisible by 3 and 2");
    else
    printf("Number is not divisble by 3 and 2");
    return 0;
}