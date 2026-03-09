#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int sum=0;
    cout<<"The sum of the array is:-"<<endl;
    for(int i=0;i<5;i++)
    {
        sum += arr[i];
    }
    cout<<sum<<endl;
    return 0;
}