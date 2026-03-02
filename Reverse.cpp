#include<iostream>
using namespace std;

int main()
{
    int n,rev = 0,temp;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    temp = n;
    while(temp!=0)
    {
        temp = n%10;
        rev = rev*10+temp;
        n = n/10;
    }
    cout<<"The reverse of the number is:"<<rev<<endl;
    return 0;
}