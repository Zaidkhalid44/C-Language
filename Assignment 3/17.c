#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    printf("Valid triangle");
    else
    printf("Invalid Triangle");
    return 0;
}