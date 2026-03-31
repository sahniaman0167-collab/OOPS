#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2,2,1,2};

    int count = 0, candidate = 0;

    for (int num : nums) {
        if (count == 0)
            candidate = num;
        count += (num == candidate) ? 1 : -1;
    }

    cout << candidate;
}