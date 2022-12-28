#include <iostream>

using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;
    for(int i = 0; i < numTestCases; ++i) {
        int number;
        cin >> number;
        if(number >= 5) printf("0\n");
        else if(number == 4) printf("4\n");
        else if(number == 3) printf("6\n");
        else if(number == 2) printf("2\n");
        else printf("1\n");
    }
}