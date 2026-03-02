#include<iostream>
using namespace std;

class check
{
    private:
    int n;
    public:
    check(int num)
    {
        n = num;
    }
    void EvenOdd()
    {
        if(n%2==0)
        {
            cout<<"The number is even."<<endl;
        }
        else
        {
            cout<<"The number is odd."<<endl;
        }
    }
};

int main()
{
    check c1(8);
    c1.EvenOdd();
    return 0;
}