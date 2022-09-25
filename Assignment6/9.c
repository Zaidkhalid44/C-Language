#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    for(i=2;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        break;
    }
    printf("The LCM is %d",i);
    return 0;
}