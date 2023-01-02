#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int main() {
    int numItems;
    cin >> numItems;
    vector<long long> itemPrices(numItems,0L);
    for(int i = 0; i < numItems; ++i) {
        cin >> itemPrices[i];
    }
    // sort from greatest to least
    sort(itemPrices.begin(),itemPrices.end(),[](long long x, long long y){ return x > y; });
    long long maximumDiscount = 0;
    for(int i = 0; i < itemPrices.size(); ++i) {
        if(i % 3 == 2) maximumDiscount += itemPrices[i];
    }
    printf("%lld\n",maximumDiscount);
}