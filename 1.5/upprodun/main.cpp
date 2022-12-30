#include <iostream>

using namespace std;

int main() {
    int numRooms, numTeams;
    cin >> numRooms >> numTeams;
    int div = numTeams / numRooms;
    int rem = numTeams % numRooms;
    for(int i = 0; i < numRooms; ++i) {
        int teamsInThisRoom = div;
        if(rem > 0) {
            ++teamsInThisRoom; 
            --rem;
        }
        cout << string(teamsInThisRoom, '*') << endl;
    }
}