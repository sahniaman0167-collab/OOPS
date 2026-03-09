#include<iostream>
using namespace std;

class Demo
{
    int a;
    public:
    Demo(int x)
    {
        a = x;
        cout<<"Parameterized constructor called"<<endl;
    }
};

int main()
{
    Demo d(10);
    return 0;
}