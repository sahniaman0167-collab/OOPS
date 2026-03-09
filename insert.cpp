#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};
    int pos = 3;
    int val = 25;

    for(int i=4;i>=pos;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    cout<<"Array after inserting element is:-"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}