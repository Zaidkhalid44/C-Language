#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>99 && x<999)
    printf("It is a three digit number");
    else
    printf("Given number is not three digit");
    return 0;
}