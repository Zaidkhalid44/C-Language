#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0|| n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int x;
    cout<<"Enter a number: \n";
    cin>>x;
   cout<< fact(x);
    return 0;
}