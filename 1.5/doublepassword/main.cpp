#include <iostream>

using namespace std;

int main() {
    string password1, password2;
    cin >> password1 >> password2;
    int numDifferent = 0;
    for(int i = 0; i < 4; ++i) {
        if(password1[i] != password2[i]) ++numDifferent;
    }
    int possibleSequences = 1 << numDifferent;
    printf("%d\n",possibleSequences);
}