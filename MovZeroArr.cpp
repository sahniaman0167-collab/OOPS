#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0,1,0,3};

    int j = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0)
            swap(nums[i], nums[j++]);
    }

    for(int x: nums)
        cout << x << " ";
}