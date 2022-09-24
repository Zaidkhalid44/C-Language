#include<stdio.h>
int main()
{
    int x;
    printf("enter any number: ");
    scanf("%d",&x);
    if(x>0)
    printf("Number is positive");
    else if(x<0)
    printf("Number is negative");
    else
    printf("You entered 0");
    return 0;
}