#include<iostream>
using namespace std;

class Number
{
    int arr[5],sum=0;
    float avg;

    public:
    void input()
    {
        cout<<"Enter 5 numbers:"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }
    void calculate()
    {
        for(int i=0;i<5;i++)
        {
            sum += arr[i];
        }
        avg = sum/5.0;
    }

    void display()
    {
        cout<<"The sum of the numbers is:"<<sum<<endl;
        cout<<"The average of the numbers is:"<<avg<<endl;
    }
};

int main()
{
    Number n;
    n.input();
    n.calculate();
    n.display();
    return 0;
}