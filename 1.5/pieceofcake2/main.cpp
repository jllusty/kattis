#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int height = 4;
    int sideLength, horizontalCut, verticalCut;
    cin >> sideLength >> horizontalCut >> verticalCut;
    int maxHorizontalSlice = max(sideLength - horizontalCut, horizontalCut);
    int maxVerticalSlice = max(sideLength - verticalCut, verticalCut);
    int maxVolume = maxHorizontalSlice * maxVerticalSlice * height;
    printf("%d\n",maxVolume);
}