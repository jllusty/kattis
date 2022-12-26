#include <iostream>

bool isVowel(char c) {
    if(c == 'a' || c == 'A') return true;
    if(c == 'e' || c == 'E') return true;
    if(c == 'i' || c == 'I') return true;
    if(c == 'o' || c == 'O') return true;
    if(c == 'u' || c == 'U') return true;
    return false;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    int numVowels = 0;
    for(char c : str) if(isVowel(c)) ++numVowels;
    printf("%d\n",numVowels);
}