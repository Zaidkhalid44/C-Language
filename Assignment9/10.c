#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,F,discrement,imaginary;
    printf("Entered the coefficients of quadratic equation: ");
    scanf("%f%f%f",&a,&b,&c);
    discrement=b*b-4*a*c;
    switch (discrement>0)
    {
    case 1: printf("Roots are Real and Unequal\n");
            D=(-b+sqrt(discrement))/2*a;
            F=(-b-sqrt(discrement))/2*a;
        printf("Roots of quadratic equation are %.1f and %.1f",D,F);
        break;
    case 0: switch (discrement==0)
    {
                case 1: printf("Roots are Real and Equal\n");
                      D=-b/2*a;
                     printf("Roots are %.1f %.1f",D,D);
                     break;
                case 0: printf("Roots are Imaginary\n");
                    D=(-b/2*a);
                    imaginary=sqrt(-discrement)/2*a;
                    printf("Roots are %.1f+%.1fi and %.1f-%.1fi", D,imaginary,D,imaginary);
                    break;
    } break;
    }
    return 0;
}