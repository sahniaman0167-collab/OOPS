#include<iostream>
using namespace std;

class area
{
    private:
    float radius;
    public:
    area(float r)
    {
        radius = r;
    }
    void circle()
    {
        cout<<"Area of circle is:"<<3.14*radius*radius<<endl;
    }
};

int main()
{
    area r1(5);
    r1.circle();
    return 0;
}