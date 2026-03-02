#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int roll;
    public:
    Student(string n,int r)
    {
        name = n;
        roll = r;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<roll<<endl;
    }
};
int main()
{
    Student s1("Aman",16);
    s1.display();
    return 0;
}