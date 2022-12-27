#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numTimes;
    cin >> numTimes;
    vector<int> stopwatchPresses(numTimes, -1);
    for(int i = 0; i < numTimes; ++i) {
        cin >> stopwatchPresses[i];
    }
    if(numTimes % 2 == 0) {
        // sum difference of adjacent times, jump two
        int timeElapsed = 0;
        for(int i = 0; i < numTimes - 1; i += 2) timeElapsed += stopwatchPresses[i+1] - stopwatchPresses[i];
        printf("%d\n",timeElapsed);
    }
    else if(numTimes % 2 == 1) {
        printf("still running\n");
    }
}