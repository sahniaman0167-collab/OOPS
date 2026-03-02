#include<iostream>
using namespace std;

class Rectangle
{
    private:
    float length,breadth;
    public:
    Rectangle(float l,float b)
    {
        length = l;
        breadth = b;
    }
    void display()
    {
        cout<<"Area of rectangle is"<<length*breadth<<endl;
    }
};

int main()
{
    Rectangle r1(5,3);
    r1.display();
    return 0;
}
