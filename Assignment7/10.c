#include<stdio.h>
#include<math.h>
int main()
{
    int i,store,sum=0,restore,count=0,rem=0;
    for(i=1;i<=1000;i++)
    {
        store=i;
        count=0;
        while(store)
        {
            store=store/10;
            count++;
        }
        restore=i;
        sum=0;
        while(restore)
        {
            rem=restore%10;
            restore=restore/10;
            sum=sum+pow(rem,count);
        }
        if(sum==i)
        printf("%d ",i);
    }
    return 0;
}