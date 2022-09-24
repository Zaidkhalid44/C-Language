#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    a>b&&a>c?printf("A is greates number"):b>c?printf("B is greatest"):printf("C is greatest");
    return 0;
}