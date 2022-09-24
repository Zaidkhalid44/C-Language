#include<stdio.h>
int main()
{
    char x;
    printf("Enter any alphabet: ");
    scanf("%c",&x);
    if(islower(x))
        printf("Lower case");
    else if (isupper(x))
        printf("Upper case");
    else
    printf("Wrong input");
    return 0;
    
}