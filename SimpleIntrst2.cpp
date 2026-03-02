#include<iostream>
using namespace std;

class interest
{
    private:
    float p,r,t;
    public:
    interest(float principle,float rate,float time)
    {
        p = principle;
        r = rate;
        t = time;
    }
    void display()
    {
        cout<<(p*r*t)/100<<"is the simple interest."<<endl;
    }
};

int main()
{
    interest i1(1000,5,2);
    i1.display();
    return 0;
}