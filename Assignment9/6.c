#include<stdio.h>
int main()
{
    int x;
    printf("Enter the year: ");
    scanf("%d",&x);
    switch (x%100==0)
    {
    case 1: if(x%400==0)
    printf("Leap year");
    else
    printf("not a leap year");
        break;
    case 0: if(x%4==0)
    printf("Leap year");
    else
    printf("Not a leap year");
    break;
    
    default: printf("Invalid year");
        break;
    }
}