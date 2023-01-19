#include<stdio.h>
void rev(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    rev(x);
    return 0;

}
void rev(int n)
{
    if(n==0)
    return;
    printf("%d",n%10);
    rev(n/10);
    
}