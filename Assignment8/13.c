#include<stdio.h>// incomplete
int main()
{
    int i,j,count='A';
    for(i=0;i<=6;i++)
    {
        count='A';
        for(j=0;j<=6-i;j++)
        printf("%c",count++);
        for(j=0;j<=2*i+1;j++)
        printf(" ");
        if(i==0)
        count--;
        while(count=='A')
        printf("%c",count--);
        printf("\n");
        
    }
    return 0;
}