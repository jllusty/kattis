#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numPeople;
    cin >> numPeople;
    vector<int> line(numPeople,-1);
    line[0] = 1;
    for(int i = 1; i < numPeople; ++i) {
        int distance;
        cin >> distance;
        line[distance + 1] = i + 1;
    }
    for(int i = 0; i < numPeople - 1; ++i) printf("%d ",line[i]);
    printf("%d\n",line.back());
}