#include<iostream>
using namespace std;
int power(int n, int m)
{
    if(m!=0)
    return (n*power(n,m-1));
    else
    return 1;
}
int main()
{
    int x,y;
    cout<<"Enter base and power respectively:\n";
    cin>>x>>y;
    cout<<power(x,y);
    return 0;
}