#include<iostream>
using namespace std;
int hcf(int n, int m)
{
    if(n>m)
        {
            if(n%m==0)
    return m;
    return hcf(n%m,m);
        }
    else
    {
     if(m%n==0)
    return n;
    return hcf(n,m%n);
    }
}
int main()
{
    int x,y;
    cout<<"Enter two number for HCF:\n";
    cin>>x>>y;
    cout<<hcf(x,y);
    return 0;
}