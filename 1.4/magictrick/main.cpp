#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    int n = s.length();
    // if two letters are the same, we cannot know if we swapped them
    // or left them untouched
    bool containsSameLetters = false;
    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(s[i] == s[j]) {
                containsSameLetters = true;
            }
        }
    }
    std::cout << (containsSameLetters ? 0 : 1) << std::endl;
}