#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int num;
    cout<<"Enter the element you want to search:-"<<endl;
    cin>>num;
    for(int i=0;i<5;i++)
    {
        if(arr[i] == num)
        {
            cout<<"Element found at index:"<<i<<endl;
            break;
        }
    }
    return 0;
}