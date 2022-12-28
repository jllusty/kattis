#include <iostream>

using namespace std;

int main() {
    string text;
    cin >> text;
    int n = text.length();
    // divide
    int m = n / 2;
    string first = text.substr(0, m), second = text.substr(m, m);
    int rot1 = 0, rot2 = 0;
    for(int i = 0; i < m; ++i) {
        rot1 += first[i] - 'A';
        rot2 += second[i] - 'A';
    }
    // rotate
    string rotFirst = first, rotSecond = second;
    for(int i = 0; i < m; ++i) {
        rotFirst[i] = (first[i] - 'A' + rot1) % ('Z' - 'A' + 1) + 'A';
        rotSecond[i] = (second[i] - 'A' + rot2) % ('Z' - 'A' + 1) + 'A';
    }
    // merge
    string merged = rotFirst;
    for(int i = 0; i < m; ++i) {
        merged[i] = ((rotFirst[i] - 'A') + (rotSecond[i] - 'A')) % ('Z' - 'A' + 1) + 'A';
    }
    cout << merged << endl;
}