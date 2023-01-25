#include<iostream>
using namespace std;
int sum_of_digits(int n)
{   
    if(n==0)
    return n;

   return sum_of_digits(n/10)+n%10;

}
int main()
{
    int x;
    cout<<"Enter a number: \n";
    cin>>x;
   cout<< sum_of_digits(x);

    return 0;
}