#include<stdio.h>
int check(int);
int check(int x)
{
    int y,rem,temp;
    printf("Enter a number: ");
    scanf("%d",&x);
    temp=x;
    printf("\nEnter a digit you want to check:");
    scanf("%d",&y);
    while(x)
    {
        rem=x%10;
        if(rem==y)
        {
            printf("The digit %d is present in the %d: ",y,temp);
             break;
        }
        x=x/10;
        
    }
    if(rem!=y)
    printf("The given digit is not present in the given number:");
    return 0;

}
int main()
{
    int x;
    check(x);
}