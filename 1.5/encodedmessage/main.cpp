#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<char>> makeSquare(string message) {
    int n = message.length();
    int s = sqrt(n);
    vector<vector<char>> block(s, vector<char>(s, '\0'));
    int current = 0;
    for(int i = 0; i < s; ++i) {
        for(int j = 0; j < s; ++j) {
            block[i][j] = message[current++];
        }
    }
    return block;
}

vector<vector<char>> flipSquareHorizontally(vector<vector<char>> block) {
    int s = block.size();
    vector<vector<char>> result(s, vector<char>(s, '\0'));
    for(int i = 0; i < s; ++i) {
        for(int j = 0; j < s; ++j) {
            int ii = s - 1 - i;
            result[ii][j] = block[i][j];
        }
    }
    return result;
}

vector<vector<char>> transposeSquare(vector<vector<char>> block) {
    int s = block.size();
    vector<vector<char>> result(s, vector<char>(s, '\0'));
    for(int i = 0; i < s; ++i) {
        for(int j = 0; j < s; ++j) {
            result[j][i] = block[i][j];
        }
    }
    return result;
}

string readSquare(vector<vector<char>> block) {
    string s;
    for(int i = 0; i < block.size(); ++i) {
        for(int j = 0; j < block[i].size(); ++j) {
            s.push_back(block[i][j]);
        }
    }
    return s;
}

int main() {
    int numTestCases;
    cin >> numTestCases;
    vector<string> messages;
    for(int i = 0; i < numTestCases; ++i) {
        string message;
        cin >> message;
        messages.push_back(message);
    }
    for(string message: messages) {
        vector<vector<char>> block = makeSquare(message);
        block = flipSquareHorizontally(transposeSquare(block));
        string original = readSquare(block);
        cout << original << endl;
    }
}