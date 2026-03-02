#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,temp,original;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    original=n;
    while(n!=0)
    {
        temp = n%10;
        rev = rev*10+temp;
        n/=10;
    }
    if(original==rev)
    {
        cout<<"The number is a palindrome."<<endl;
    }
    else
    {
        cout<<"The number is not a palindrome."<<endl;
    }
    return 0;
}