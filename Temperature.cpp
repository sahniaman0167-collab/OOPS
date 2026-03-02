#include<iostream>
using namespace std;

class Temperature
{
    private:
    float c;
    public:
    Temperature(float temp)
    {
        c = temp;
    }
    void convert()
    {
        cout<<"Tempertaure in fahrenheit is:"<<(c*9/5)+32<<endl;
    }
};

int main()
{
    Temperature t1(25);
    t1.convert();
    return 0;
}