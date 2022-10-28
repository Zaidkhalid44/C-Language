#include<stdio.h>
int main()
{
    int a=-1,b=1,sum,N,i;
    printf("Enter the number you want to check: ");
    scanf("%d",&N);
    for(i=1;1;i++)
    {
        sum=a+b;
         a=b;
        b=sum;
       
         if(N==sum)
        {printf("%d is the part of Fibonacci Series",N);
        break;}
       else if(sum>N)
      { printf("Given number is not the part of Series");
        break; }
    }
    
    return 0;
}