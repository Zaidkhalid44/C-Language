#include<stdio.h>
#include<math.h>
int main()
{
    int d,x,y,a=0,b=0,c=0;
    printf("Enter the coeffcient of quadaritc equation respectively: ");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b-4*a*c<0)
    printf("Roots are imaginary");
    else
    {
        printf("Roots are Real\n");
         if(b*b-4*a*c==0){
            printf("Roots are Equal\n");
         }
        x=(-b+sqrt(b*b-4*a*c))/2*a;
        y=(-b-sqrt(b*b-4*a*c))/2*a;
        printf("Roots are %d %d",x,y);
    }
    
return 0;
}