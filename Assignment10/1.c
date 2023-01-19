#include<stdio.h>
float area(float);
int main()
{
    float r,store;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    store=area(r);
    printf("The area of the circle is %.2f",store);
    return 0;
}
float area(float r)
{
    float store;
    store=3.14*r*r;
    return store;
}