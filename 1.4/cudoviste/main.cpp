#include <iostream>
#include <vector>

using namespace std;



int main() {
    int numRows, numCols;
    std::cin >> numRows >> numCols;
    vector<vector<char>> grid(numRows, vector<char>(numCols, '\0'));
    for(int i = 0; i < numRows; ++i) {
        for(int j = 0; j < numCols; ++j) {
            std::cin >> grid[i][j];
        }
    }
    // squashedCars[i] == i cars squashed
    vector<int> squashedCarCounts(5, 0);
    for(int i = 0; i <= numRows - 2; ++i) {
        for(int j = 0; j <= numCols - 2; ++j ) {
            // look at 2x2 block:
            // a b
            // c d
            char a = grid[i][j], b = grid[i][j+1];
            char c = grid[i+1][j], d = grid[i+1][j+1];
            // block contains building, cannot park
            if(a == '#' || b == '#' || c == '#' || d == '#') continue;
            // block contains parked cars or free spaces, can park
            int squashedCars = 0;
            squashedCars += (a == 'X') ? 1 : 0;
            squashedCars += (b == 'X') ? 1 : 0;
            squashedCars += (c == 'X') ? 1 : 0;
            squashedCars += (d == 'X') ? 1 : 0;
            ++squashedCarCounts[squashedCars];
        }
    }
    for(int x : squashedCarCounts) printf("%d\n", x);
}