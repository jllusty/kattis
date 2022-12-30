#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    // parse input
    string input;
    getline(cin, input);
    istringstream iss(input);
    int height;             // height of binary tree
    string seq;             // path from root
    iss >> height >> seq;
    ++height;               // include root

    // right side of the tree, bottom to top
    vector<int> rightSide(height,0);
    rightSide[0] = 1;
    for(int i = 1; i < height; ++i) {
        rightSide[i] = (1 << (height - i)) + rightSide[i-1];
    }
    // reverse, top to bottom
    rightSide = vector<int>(rightSide.rbegin(),rightSide.rend()); 
    // obtain an index which is the distance from the right side of the tree
    int levelIndex = 0;
    for(char c : seq) levelIndex = 2 * levelIndex + ((c == 'L') ? 1 : 0);

    // sum the value at the right side of the tree with our distance from it
    int result = levelIndex + rightSide[seq.length()];

    // result
    printf("%d\n",result);
}