#include<stdio.h>
int main()
{
    int x,res;
    printf("Enter a number: ");
    scanf("%d",&x);
            res=x&1;
            if(res==1)
            printf("Number is odd");
        else
        printf("Number is even");
        return 0;
}