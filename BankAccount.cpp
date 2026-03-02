#include<iostream>
using namespace std;

class Bank
{
    private:
    string name:
    float balance;
    public:
    Bank(string n,float bal)
    {
        name = n;
        balance = bal;
    }
    void display()
    {
        cout<<" Name:"<<name<<endl;
        cout<<" Balance:"<<balance<<endl;
    }
};

int main()
{
    Bank b1("Aman",100000);
    b1.display();
    return 0;
}