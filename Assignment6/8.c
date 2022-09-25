#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter any prime number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {    if(n%i==0)
            flag =1;
    }
    if (flag==1)
    printf("Not a prime number");
   else if(n==1)
    printf("Not a prime number");
         else
    printf("Prime number");
    return 0;
}