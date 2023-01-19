#include<stdio.h>
void printN(int);
int main()
{
    int n;
    printf("Enter how many number you want to print ");
    scanf("%d",&n);
    printN(n);
    return 0;
}
void printN(int x)
{
    if(x==0)
    return;
     printf("%d ",2*x-1);
    printN(x-1);
     
   
}