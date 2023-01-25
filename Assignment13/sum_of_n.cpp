#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
        return n;
    return n+sum(n-1);
}
int main()
{
    int x;
    cout<<"Enter a number: "<<endl;
    cin>>x;
    cout<<"Sum of "<<x <<" is "<<sum(x);
    return 0;
}