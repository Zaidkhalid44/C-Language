// #include<stdio.h>
// int main()
// {
//     int i,j,count=1;
//     for(i=1;i<=4;i++)
//     {
//         count=1;
//         for(j=1;j<=7;j++)
//         {
//             if(j>=1&&j<=5-i || j>=3+i && j<=7)
//             {
//             printf("%d",count);
//              j<4?++count:--count;
//              }
//             else
//          printf(" ");
//         }printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int i,j,count=0;
    for(i=0;i<=3;i++)
    {
    count=0;
    for(j=0;j<=3-i;j++)
    printf("%d", ++count);
    for(j=0;j<2*i-1;j++)
    printf(" ");
    if (i==0)
    count--;
    while(count)
    printf("%d", count--);
    printf("\n");
    }
    return 0;
}