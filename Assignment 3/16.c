#include<stdio.h>
int main()
{
    char x;
    printf("Enter any charcater: ");
    scanf("%c",&x);
    if(isupper(x))
    printf("Upper case");
    else if(islower(x))
    printf("Lower case");
    else
    printf("Special character or digit");
    return 0;

}