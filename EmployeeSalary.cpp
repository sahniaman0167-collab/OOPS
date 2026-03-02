#include<iostream>
using namespace std;

class Employee
{
    private:
    string name;
    int id;
    float salary;
    public:
    Employee(string n,int i,float sal)
    {
        name = n;
        id = i;
        salary = sal;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};

int main()
{
    Employee e1("Aman",16,100000);
    e1.display();
    return 0;
}