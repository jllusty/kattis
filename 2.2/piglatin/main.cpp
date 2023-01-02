#include <iostream>
#include <sstream>

using namespace std;

string toPigLatin(string word) {
    const string vowels = "aeiouy";
    string result;
    // first character is a vowel
    if(vowels.find(word[0]) != -1) {
        result = word + "yay";
    }
    // first character is a consonant
    else {
        int firstVowelPos = word.find_first_of(vowels);
        result = word.substr(firstVowelPos) + word.substr(0,firstVowelPos) + "ay";
    }
    return result;
}

int main() {
    string line;
    while(getline(cin, line)) {
        istringstream iss(line);
        string word;
        string result;
        while(iss >> word) {
            result.append(toPigLatin(word) + " ");
        }
        result.resize(result.size()-1);
        cout << result << endl;
    }
}