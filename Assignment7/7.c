#include<stdio.h>
int main()
{
    int i,j,flag=0,a,b,min,max;
    printf("Enter the value of A and B: ");
    scanf("%d%d",&a,&b);
    min=a>b?b:a;
    max=a>b?a:b;
    for(i=min;i<=max;i++)
    { flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
           
        }
         if(flag==0)
       printf("%d ",i);
    }
    return 0;  
}