#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0 || n==1)
    return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int x,i;
    cout<<"Enter a number:\n";
    cin>>x;
    for(i=0;i<x;i++)
    {
    cout<<" "<<fib(i) ;
    }
    return 0;
}