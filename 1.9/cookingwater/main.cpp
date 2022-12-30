#include <iostream>
#include <vector>

using namespace std;

// If it is impossible that all the pots actually started boiling at 
// the same point in time, output 'edward is right'. Otherwise, output 
// 'gunilla has a point'.

// the water begins boiling between when he looks away (start of a) and 
// looks back (end of b)

// given a set of intervals I_i = [a_i,b_i] determine if they intersect?

int main() {
    int numTimesBoiledWater;
    cin >> numTimesBoiledWater;
    vector<int> lookingAway(1001, 0);
    for(int i = 0; i < numTimesBoiledWater; ++i) {
        int startLookingAway, endLookingAway;
        cin >> startLookingAway >> endLookingAway;
        for(int j = startLookingAway; j <= endLookingAway; ++j) {
            ++lookingAway[j];
        }
    }
    // see if there is an entry appearing that many times
    bool hasIntersection = false;
    for(int i = 0; i <= 1000; ++i) {
        if(lookingAway[i] == numTimesBoiledWater) {
            hasIntersection = true;
            break;
        }
    }
    if(hasIntersection) {
        cout << "gunilla has a point\n";
    }
    else {
        cout << "edward is right\n";
    }
}