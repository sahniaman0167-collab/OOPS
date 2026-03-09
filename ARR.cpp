#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    
    for(int i=0;i<4;i++)
    {
        arr[i] = arr[i+1];
    }
    cout<<"Array after deleting first element is:-"<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}