#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> distances(4,-1);
    for(int i = 0; i < 4; ++i) cin >> distances[i];
    sort(distances.begin(),distances.end());
    printf("%d\n",distances[0] * distances[2]);
}