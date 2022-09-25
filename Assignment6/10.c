#include<stdio.h>
int main()
{
    int n,rem,i,reverse=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i=n;i++)
   // while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("The reverse is %d",reverse);
        return 0;
} //  NOTE REVERSE OF A NUMBER