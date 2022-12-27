#include <iostream>

using namespace std;

int main() {
    int cups[3] = {1, 0, 0};
    // moves
    string moves;
    getline(cin, moves);
    for(char c : moves) {
        // swap entries of cup based on the move
        if(c == 'A') {
            int tmp = cups[1];
            cups[1] = cups[0];
            cups[0] = tmp;
        }
        else if(c == 'B') {
            int tmp = cups[2];
            cups[2] = cups[1];
            cups[1] = tmp;
        }
        else {
            int tmp = cups[2];
            cups[2] = cups[0];
            cups[0] = tmp;
        }
    }
    // find the ball in the cups
    if(cups[0] == 1) printf("1\n");
    if(cups[1] == 1) printf("2\n");
    if(cups[2] == 1) printf("3\n");
}