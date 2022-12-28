#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numEvents;
    cin >> numEvents;
    vector<int> daysWithFreeFood(365 + 1,0);
    for(int i = 0; i < numEvents; ++i) {
        int start, end;
        cin >> start >> end;
        for(int day = start; day <= end; ++day) daysWithFreeFood[day] = 1;
    }
    // count number of days with free food
    int numDaysWithFreeFood = 0;
    for(int day = 1; day <= 365; ++day) {
        if(daysWithFreeFood[day] == 1) ++numDaysWithFreeFood;
    }
    printf("%d\n",numDaysWithFreeFood);
}