#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    cout<<"The number of digits in the number is:"<<count<<endl;
    return 0;
}