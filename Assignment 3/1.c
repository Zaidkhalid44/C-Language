#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>0)
        printf("Number is Positive");
    else if (x<0)
    {
        printf("Number is non positive");
    }
    else
    printf("Neither positive nor negative");
    return 0;
}