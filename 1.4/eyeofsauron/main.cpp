#include <iostream>

int main() {
    std::string towerString;
    std::cin >> towerString;
    int numBarsLeft = 0, numBarsRight = 0;
    bool seenEye = false;
    for(int i = 0; i < towerString.size(); ++i) {
        char c = towerString[i];
        if(seenEye) {
            numBarsRight += (c == '|') ? 1 : 0;
        }
        else {
            numBarsLeft += (c == '|') ? 1 : 0;
            seenEye = (c == '(');
        }
    }
    if(numBarsLeft == numBarsRight) printf("correct\n");
    else printf("fix\n");
}