#include<iostream>
using namespace std;

class calculator
{
    private:
    int a,b;
    public:
    calculator(int x,int y)
    {
        a = x;
        b = y;
    }
    void add()
    {
        cout<<"Sum is:"<<a+b<<endl;
    }
};

int main()
{
    calculator c1(5,3);
    c1.add();
    return 0;
}