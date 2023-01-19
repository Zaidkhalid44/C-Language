#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    switch (x%2==0)
    {
    case 1: printf("Nearest Odd number of %d is %d",x,x+1);
    break;
    case 0: printf("You entered a Odd number");
    break;
    default: printf("You entered a character");
    }
    return 0;
}