#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    printf("%d\n",2*i);
    return 0;
}