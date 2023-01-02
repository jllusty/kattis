#include <iostream>
#include <map>

using namespace std;

int main() {
    int numRules, numIterations;
    cin >> numRules >> numIterations;
    map<char,string> mappings;
    for(int i = 0; i < numRules; ++i) {
        char from;
        string to;
        cin >> from >> to >> to;
        mappings[from] = to;
    }
    string seq;
    cin >> seq;
    for(int i = 0; i < numIterations; ++i) {
        string result;
        for(char c : seq) result += (mappings.count(c)) ? mappings[c] : string(1,c);
        seq = result;
    }
    cout << seq << endl;
}