#include<iostream>
using namespace std;

class Demo
{
    public:
    Demo()
    {
        cout<<"Default constructor called"<<endl;
    }
    Demo(int a)
    {
        cout<<"Parameterized constructor called with value:"<<a<<endl;
    }
};

int main()
{
    Demo d;
    Demo d1(10);
    return 0;
}