#include <iostream>

int main() {
    std::string cipherText;
    std::cin >> cipherText;
    int numSubstitutions = 0;
    for(int i = 0; i < cipherText.length(); ++i) {
        char substitution;
        if(i % 3 == 0) {
            substitution = 'P';
        }
        else if(i % 3 == 1) {
            substitution = 'E';
        }
        else {
            substitution = 'R';
        }
        char letter = cipherText[i];
        if(letter != substitution) ++numSubstitutions;
    }
    printf("%d\n",numSubstitutions);
}