#include<stdio.h>
int main()
{
    int day;
    printf("Enter day number: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1: printf("You'r awesome");
        break;
    case 2: printf("You'r crazy");
        break;
    case 3: printf("Smile");
        break;
    case 4: printf("You'r Handsome");
        break;
    case 5: printf("You'r Beautiful");
        break;
    case 6: printf("Mother is a Yoddha");
        break;
    case 7: printf("Father is Champion");
        break;
    
    default: printf("Invalid Day");
        break;
    }
    return 0;
}