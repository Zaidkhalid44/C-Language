#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    switch (x<0)
    {
    case 1: printf("%d",-1*x);
        break;
    case 0: printf("%d",-1*x);
        break;
    
    default: 
    if(x==0)
    printf("You entered zero");
     break;
    }
        return 0;
}