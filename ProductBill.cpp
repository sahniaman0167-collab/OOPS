#include<iostream>
using namespace std;

class Product
{
    public:
    float price;
    int quantity;
    public:
    Product(float p,int q)
    {
        price = p;
        quantity = q;
    }
    void total()
    {
        cout<<"The total bill is:"<<price*quantity<<endl;
    }
};

int main()
{
    Product p1(100,5);
    p1.total();
    return 0;
}