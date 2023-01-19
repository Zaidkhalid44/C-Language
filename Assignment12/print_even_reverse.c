#include<stdio.h>
void printN(int);
int main()
{
    int x;
    printf("Enter the numbers you want to print: ");
    scanf("%d",&x);
    printN(x);
    return 0;
}
void printN(int x)
{
    if(x==0)
    return;
     printf("%d ",2*x);
    printN(x-1);
   
    
}