#include<stdio.h>
void octal(int);
int main()
{
    int x;
    printf("Enter a decimal number: ");
    scanf("%d",&x);
    octal(x);
    return 0;
}
void octal(int n)
{
    if(n==0)
    return;
    octal(n/8);
    printf("%d",n%8);
    
}