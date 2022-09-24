#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year: ");
    scanf("%d",&x);
    if(x%100==0)
    {
        if(x%400==0)
        printf("Leap year");
        else
printf("Not a leap year");
    }
if(x%100!=0)
{
    if(x%4==0)
    printf("leap year");
    
}


return 0;
}