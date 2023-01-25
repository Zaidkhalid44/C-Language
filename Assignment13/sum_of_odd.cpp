#include<iostream>
using namespace std;
int sum_odd(int n)
{
    if(n==0)
        return n;
    return sum_odd(n-1)+2*n-1;
}
int main()
{
    int x;
    cout<<"Enter a number: \n";
    cin>>x;
    cout<<sum_odd(x);
    return 0;
}