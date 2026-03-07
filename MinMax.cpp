#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 5, 15, 25};
    int max = arr[0];
    int min = arr[0];
    int MaxIndex = 0;
    int MinIndex= 0;
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            MaxIndex = i;
        }
        if(arr[i]<min)
        {
            min = arr[i];
            MinIndex = i;
        }
    }
    cout<<"The maximum element is:"<<max<<endl;
    cout<<"The minimum element is:"<<min<<endl;
    cout<<"The maximum element at index is:"<<MaxIndex<<endl;
    cout<<"The minimum element at index is:"<<MinIndex<<endl;
    return 0;
}