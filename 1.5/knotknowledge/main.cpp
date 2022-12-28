#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numKnotsToKnow;
    cin >> numKnotsToKnow;
    // set knots to know to 1
    vector<int> knotsToKnow(1001, -1);
    for(int i = 0; i < numKnotsToKnow; ++i) {
        int knot;
        cin >> knot;
        knotsToKnow[knot] = 1;
    }
    // set known knots to 0
    for(int i = 0; i < numKnotsToKnow - 1; ++i) {
        int knot;
        cin >> knot;
        knotsToKnow[knot] = 0;
    }
    // find the unknown knot (still set to 1)
    int unknownKnot = -1;
    for(int knot = 0; knot < 1001; ++knot) {
        if(knotsToKnow[knot] == 1) {
            unknownKnot = knot;
            break;
        }
    }
    printf("%d\n", unknownKnot);
}