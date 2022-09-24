#include<stdio.h>
int main()
{
    int a,b,c,d,e,pass,fail;
    printf("Enter the marks of five subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>33&&b>33&&c>33&&d>33&&e>33)
    {
        printf("Student is Pass");
    }
    else
    printf("Student is failed");
    return 0;
}