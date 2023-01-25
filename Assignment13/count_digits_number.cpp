#include<iostream>
using namespace std;
int count(int n)
{
   static int i=0;
    if(n>0)
    {
    count(n/10);
       i++;
    }
    return i;

    
}
int main()
{
    int y;
    cout<<"Enter a number: \n";
    cin>>y;
    cout<<count(y);
    return 0;
}