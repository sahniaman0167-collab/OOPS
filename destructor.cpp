#include<iostream>
using namespace std;

class Demo
{
    public:
    Demo()
    {
        cout<<"Default constructor called"<<endl;
    }
    Demo(int x)
    {
        cout<<"Parameterized constructor called with value: "<<x<<endl;
    }
    ~Demo()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    Demo d;
    Demo d1(10);
    return 0;
}