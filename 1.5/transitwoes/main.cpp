#include <iostream>
#include <vector>

using namespace std;

// work under the assumption that all of the buses
// leave at time = 0
int nextArrivalTime(int currentTime, int arrivalInterval) {
    // bus arrives now
    if(currentTime % arrivalInterval == 0) return currentTime;

    // bus arrives later
    // want least N s.t. currentTime < N * arrivalInterval
    int n = currentTime / arrivalInterval + 1;
    return n * arrivalInterval;
}

int main() {
    // n transit routes
    int departTime, arrivalTime, n;
    cin >> departTime >> arrivalTime >> n;

    // time to walk from (i)-th drop-off to (i+1)-th pick-up
    vector<int> walkTimes(n+1, -1);
    for(int i = 0; i < n + 1; ++i) cin >> walkTimes[i];
    // walkTimes[0] = walktime from house to first bus stop
    // walkTimes[n] = walktime from last bus stop to class

    // time to ride on bus (i)
    vector<int> busRideTimes(n, -1);
    for(int i = 0; i < n; ++i) cin >> busRideTimes[i];

    // bus (i) arrival intervals
    vector<int> busIntervals(n, -1);
    for(int i = 0; i < n; ++i) cin >> busIntervals[i];
    // first bus always leaves at time 0

    // current time
    int currentTime = departTime;
    for(int i = 0; i < n; ++i) {
        // walk to the (i)-th bus
        currentTime += walkTimes[i];
        // next arrival time for first bus
        int nextArrival = nextArrivalTime(currentTime, busIntervals[i]);
        //printf("time after arriving at bus stop = %d\n", currentTime);
        //printf("next bus arriving at %d\n", nextArrival);
        currentTime = nextArrival;
        //printf("bus arrived at time = %d\n", currentTime);
        // ride the bus until it stops
        currentTime += busRideTimes[i];
        //printf("bus stopped at time = %d\n", currentTime);
    }
    // walk to class from the last bus
    currentTime += walkTimes[n];
    //printf("we arrived at time%d\n",currentTime);
    if(currentTime > arrivalTime) {
        printf("no\n");
    }
    else {
        printf("yes\n");
    }
}