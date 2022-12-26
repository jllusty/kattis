#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> seenX(1001,0), seenY(1001,0);
    for(int i = 0; i < 3; ++i) {
        int x, y;
        std::cin >> x >> y;
        ++seenX[x];
        ++seenY[y];
    }
    // find the x and y vals that have been seen only once
    int xVal, yVal;
    for(int i = 1; i <= 1000; ++i) {
        if(seenX[i] == 1) xVal = i;
        if(seenY[i] == 1) yVal = i;
    }
    printf("%d %d\n",xVal,yVal);
}