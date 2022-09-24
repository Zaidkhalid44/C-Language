#include<stdio.h>
int main()
{
    int i,x;
    printf("Enter the desired result: ");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
    printf("%d*%d=%d\n",x,i,x*i);
    return 0;
} // NOTE table printing program.