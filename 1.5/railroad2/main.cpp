#include <iostream>

using namespace std;

int main() {
    int xJunctions, ySwitches;
    cin >> xJunctions >> ySwitches;
    if(ySwitches % 2 == 0) printf("possible\n");
    else printf("impossible\n");
}