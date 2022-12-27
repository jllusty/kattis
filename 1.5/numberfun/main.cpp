#include <iostream>

using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;
    for(int i = 0; i < numTestCases; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        // addition
        if(a + b == c) printf("Possible\n");
        // subtraction
        else if(a - b == c) printf("Possible\n");
        else if(b - a == c) printf("Possible\n");
        // multiplication
        else if(a * b == c) printf("Possible\n");
        // division
        else if(b != 0 && a % b == 0 && a / b == c) printf("Possible\n");
        else if(a != 0 && b % a == 0 && b / a == c) printf("Possible\n");
        else printf("Impossible\n");
    }
}