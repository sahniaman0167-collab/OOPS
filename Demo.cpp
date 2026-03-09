#include<iostream>
using namespace std;

class Demo
{
    public:
    Demo()
    {
        cout<<"Default constructor called"<<endl;
    }
};

int main()
{
    Demo d;
    return 0;
}