#include<iostream>
using namespace std;

class ATM
{
    private:
    int balance = 1000;
    public:
    void deposit(int amt)
    {
        balance += amt;
    }
    void withdraw(int amt)
    {
        if (amt > balance)
        {
            cout<<"Insufficient balance"<<endl;
        }
        else
        {
            balance -= amt;
        }
    }
    void display()
    {
        cout<<"Balance is:"<<balance<<endl;
    }
};

int main()
{
    ATM atm;
    atm.deposit(500);
    atm.display();
    atm.withdraw(200);
    atm.display();
    atm.withdraw(1500);
    atm.display();
    return 0;
}