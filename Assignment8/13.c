#include<stdio.h>
int main()
{
    int i,j,count='A';
    for(i=0;i<=6;i++)
    {
        count='A';
        for(j=0;j<=12;j++)
        {
            if(j<=6-i || j>=6+i){
            printf("%c",count);
            j<6?count++:count--;}
            else{
            printf(" ");
            if(j==6)
            --count;}

        }
        printf("\n");
        
    }
    return 0;
}
