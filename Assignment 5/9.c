#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the how many times you want to print: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    printf("%d\n",i*i*i);
    return 0;
}