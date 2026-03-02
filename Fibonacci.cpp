#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,c,n=10;
    cout<<"Fibonacci series up to "<<n<<" terms:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}