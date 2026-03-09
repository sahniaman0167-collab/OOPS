#include<iostream>
using namespace std;

class Student
{
    int marks[5],total = 0;
    float per;

    public:
    void input()
    {
        cout<<"Enter a marks of 5 students:"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void calculate()
    {
        for(int i=0;i<5;i++)
        {
            total += marks[i];
            per = (total/5.0);
        }
    }

    void display()
    {
        cout<<"Total marks is:"<<total<<endl;
        cout<<"Percentage is:"<<per<<endl;
    }
};

int main()
{
    Student s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}