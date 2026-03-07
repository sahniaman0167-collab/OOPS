#include<iostream>
using namespace std;
int main()
{
    int target = 8;
    int arr[5]={2,4,6,8,10};
    for(int i=0;i<5;i++)
    {
        if(arr[i]==target)
        {
            cout<<"Target found at index:"<<i<<endl;
            break;
        }
    }
    return 0;
}