#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> prices = {7,1,5};

    int minPrice = 1e9, profit = 0;

    for(int p : prices){
        minPrice = min(minPrice, p);
        profit = max(profit, p - minPrice);
    }

    cout << profit;
}