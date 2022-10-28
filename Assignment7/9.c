#include<stdio.h>
#include<math.h>
int main()
{
    int a,on,reon,count=0,sum=0,rem=0;
    printf("Enter the number ");
    scanf("%d",&a);
    on=a;
    while(a){
    a=a/10;
    ++count;
    }
    reon=on;
    while(on)
    {
        rem=on%10;
        on=on/10;
        sum=sum+pow(rem,count);
    }
    printf("%d\n",sum);
    if(reon==sum)
        printf("Given number is armstrong number");
        else
        printf("Given number is not a armstrong number");
    return 0;
}