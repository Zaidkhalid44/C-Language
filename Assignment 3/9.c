#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    a>b&&a>c?printf("%d",a):b>c?printf("%d",b):printf("%d",c);
    return 0; 
    }