#include<stdio.h>
int main()
{
    int i,j,count='A';
    for(i=1;i<=5;i++)
    {
        count='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c",count);
                j<5?count++:count--;
            }
                 else
                printf(" ");
        }printf("\n");
    }
    return 0;
}