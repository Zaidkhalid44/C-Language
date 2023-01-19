#include<stdio.h>
int check(int);
int main()
{
    int x,result;
    printf("Enter a number: ");
    scanf("%d",&x);
    result=check(x);
    printf("%d",result);
    return 0;
}
int check(int x)
{
  if(x%2==0)
  return 1;
  else
  return 0;
}