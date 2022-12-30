#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int periodEarth = 365, periodMars = 687;
    int numCases = 0;
    int dayEarth, dayMars;
    while(cin >> dayEarth >> dayMars) {
        int numDays = 0;
        while(dayEarth != 0 || dayMars != 0) {
            dayEarth = (dayEarth + 1) % periodEarth;
            dayMars = (dayMars + 1) % periodMars;
            ++numDays;
        }
        printf("Case %d: %d\n",++numCases,numDays);
    }
}