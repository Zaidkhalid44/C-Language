#include<stdio.h>
float si(float, float, float);
int main()
{
    float p,t,r,sum;
    printf("Enter the Princple, Time and Rate of Interest: ");
    scanf("%f%f%f",&p,&t,&r);
    sum=si(p,t,r);
    printf("Simple interest is %f",sum);
    return 0;
}
float si(float p, float t, float r)
{
    float si;
    si=(p*r*t)/100;
    return si;
}