#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    while(1)
    {
    int choice;
    printf("\n 1. Check Isodceles Triangle\n");
    printf("2. Check Right angle triangle\n");
    printf("3. Check Equalateral Triangle\n");
    printf("4. Exit\n");
    printf("\n Enter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: 
            printf("Enter the sides of triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b || b==c || c==a)
            printf("Isosceles Triangle");
            else
            printf("Not an Isosceles Traingle");
        break;
    case 2 :
            printf("Enter the sides of triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==a*a)
            printf("Rigt Angle Traingle");
            else
            printf("Not a Right angle triangle");
        break;
        case 3: 
            printf("Enter the sides of triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b && a==c || b==a && b==c || c==b && c==a)
            printf("Equalatral Traingle");
            else
            printf("Not an Equalitral Triangle");
        break;
    case 4: exit(0);
    
    default: printf("Invalid choice");
        break;
    }
    }
}