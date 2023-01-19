#include<stdlib.h>
#include<stdio.h>
int main()
{
    int x,a,b;
    while(1)
    {
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Division\n");
        printf("4.Multiplication\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&x);
        
        switch (x)
        {
        case 1: printf("\n Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Sum of %d and %d is %d\n",a,b,a+b);
            break;
        case 2: printf("\n Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Subtraction of %d and %d is %d\n",a,b,a-b);
                break;
        case 3: printf("\n Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Division of %d and %d is %d\n",a,b,a/b);
                break;
        case 4: printf("\n Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Multiplication of %d and %d is %d\n",a,b,a*b);
                break;
        case 5: exit(0);
            break;
        default: printf("Invalid choice\n");
            break;
        }
    }
}