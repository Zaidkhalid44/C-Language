#include<iostream>
using namespace std;
int sqaure(int n)
{
    if(n==0)
        return n;
    return sqaure(n-1)+n*n;
}
int main()
{
    int x;
    cout<<"Enter a number: \n";
    cin>>x;
    cout<<sqaure(x);
    return 0;
}