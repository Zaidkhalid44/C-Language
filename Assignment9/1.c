#include<stdio.h>
int main()
{
    int x,year;
    printf("Enter the month number: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1: 
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:printf("31");
    break;
    case 2: printf("Enter year to check: ");
            scanf("%d",&year);
            if(year%100==0)
            {
                if(year%400==0)
                printf("29");
                else
                printf("28");
            } if(year%100!=0)
            {

                if(year%4==0)
                printf("29");
            else
            printf("28");
            }
            
        break;
    
    case 4:
    case 6:
    case 9:
    case 11: printf("30");
        break;      
    
    default: printf("You entered wrong month number");
        break;
    }
}