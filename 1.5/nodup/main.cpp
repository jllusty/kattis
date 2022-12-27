#include <iostream>
#include <sstream>
#include <istream>
#include <set>

using namespace std;

int main() {
    bool hasDupe = false;
    string input;
    getline(cin, input);
    istringstream iss(input);
    string word;
    set<string> words;
    while(iss >> word) {
        if(words.count(word) > 0) {
            hasDupe = true;
            break;
        }
        words.insert(word);
    }
    if(hasDupe) printf("no\n");
    else printf("yes\n");
}