#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("Enter the cost price and selling price of the product: ");
    scanf("%f%f",&cp,&sp);
    if(sp<cp)
    {
        loss=((cp-sp)/cp)*100;
        printf("Loss is %.2f",loss);
    }
     if(cp<sp)
    {
        profit=((sp-cp)/cp)*100;
        printf("profit is %.2f",profit);
    }
    return 0;
}