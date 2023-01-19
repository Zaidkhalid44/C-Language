#include<stdio.h>
void printSq(int);
int main()
{
    int x;
    printf("Enter the numbers: ");
    scanf("%d",&x);
    printSq(x);
    return 0;
}
void printSq(int n)
{
    if(n==0)
    return;
    printSq(n-1);
    printf("%d ",n*n);
}