#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a > b && a > c)
    {
        cout<<"A is greater than B and C."<<endl;
    }
    else if(b > a && b > c)
    {
        cout<<"B is greater than  and C."<<endl;
    }
    else
    {
        cout<<"C is greater than A and B."<<endl;
    }
    return 0;
}