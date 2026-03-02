#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Enter an operator (+, -, *, /):"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<"The sum of "<<a<<"and"<<b<<"is"<<a+b<<endl;
        break;

        case '-':
        cout<<"The substraction of "<<a<<"and"<<b<<"is"<<a-b<<endl;
        break;

        case '*':
        cout<<"The multiplication of "<<a<<"and"<<b<<"is"<<a*b<<endl;
        break;  

        case '/':
        if(b != 0)
        {
            cout<<"The division of "<<a<<"and"<<b<<"is"<<a/b<<endl;
        }
        else
        {
            cout<<"Error: Division by zero is not allowed."<<endl;  
       }
        break;

        default:
        cout<<"Invalid operator."<<endl;
    return 0;
    }
}