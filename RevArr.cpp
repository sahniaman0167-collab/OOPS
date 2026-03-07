#include<iostream>
using namespace std;

void RevArr(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    RevArr(arr,size);
    cout<<"Reversed array is:-"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}