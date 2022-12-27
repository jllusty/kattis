#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;
    for(int i = 0; i < numTestCases; ++i) {
        int numStores;
        cin >> numStores;
        int firstStoreLocation = INT_MAX;
        int lastStoreLocation = INT_MIN;
        for(int j = 0; j < numStores; ++j) {
            int storeLocation;
            cin >> storeLocation;
            firstStoreLocation = min(firstStoreLocation, storeLocation);
            lastStoreLocation = max(lastStoreLocation, storeLocation);
        }
        // optimal parking: at any store, total walking is 2 * (maxLocation - minLocation)
        int walkingDistance = 2 * (lastStoreLocation - firstStoreLocation);
        printf("%d\n", walkingDistance);
    }
}