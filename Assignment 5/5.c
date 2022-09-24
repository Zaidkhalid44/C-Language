#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the value of x");
    scanf("%d",&x);
    for(i=x;i>=1;i--)
    printf("%d\n",2*i-1);
    return 0;
}