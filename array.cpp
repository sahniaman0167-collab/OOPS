#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter element "<<i+1<<":"<<endl;
        cin>>arr[i];
    }
    cout<<"The elements in the array are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}