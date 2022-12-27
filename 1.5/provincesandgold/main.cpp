#include <iostream>

using namespace std;

int main() {
    int gold, silver, copper;
    cin >> gold >> silver >> copper;
    int buyingPower = 3 * gold + 2 * silver + copper;
    if(buyingPower < 2) printf("Copper\n");
    else {
        // victory cards
        if(buyingPower >= 8) printf("Province or ");
        else if(buyingPower >= 5) printf("Duchy or ");
        else printf("Estate or ");
        // treasure cards
        if(buyingPower >= 6) printf("Gold\n");
        else if(buyingPower >= 3) printf("Silver\n");
        else printf("Copper\n");
    }
}