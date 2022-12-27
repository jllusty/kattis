#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string cards;
    cin >> cards;
    int tabletCards = 0, compassCards = 0, gearCards = 0;
    for(char c : cards) {
        if(c == 'T') ++tabletCards; 
        if(c == 'C') ++compassCards; 
        if(c == 'G') ++gearCards; 
    }
    int minSetsOfThree = min(tabletCards,min(compassCards,gearCards));
    int score = tabletCards * tabletCards + compassCards * compassCards
        + gearCards * gearCards + 7 * minSetsOfThree;
    printf("%d\n",score);
}