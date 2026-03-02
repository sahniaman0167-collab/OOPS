#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(n < 0)
    {
        cout<<"The number is negative."<<endl;
    }
    else if(n > 0)
    {
        cout<<"The number is positive."<<endl; 
    }
    else
    {
        cout<<"The number is zero."<<endl;
    }
    return 0;
}