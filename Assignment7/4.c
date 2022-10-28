#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter the value of X and Y: ");
    scanf("%d%d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0) && (i%y==0))
        break;
        
    }
    printf("LCM of %d and %d is %d\n",x,y,i);
    printf("HCF of %d and %d is %d",x,y,(x*y)/i);
    return 0;

}