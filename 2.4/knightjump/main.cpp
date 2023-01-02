#include <iostream>
#include <vector>
#include <functional>
#include <climits>
#include <utility>
#include <queue>

using namespace std;

int main() {
    // build a grid, record starting position ('K')
    int n;
    cin >> n;
    vector<vector<char>> grid(n,vector<char>(n,'x'));
    int startX, startY;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> grid[i][j];
            if(grid[i][j] == 'K') {
                startX = i;
                startY = j;
            }
        }
    }

    // ensure we aren't already at the goal position
    if(startX == 0 && startY == 0) {
        printf("0\n");
        return 0;
    }

    // directions that a knight can move in
    const int dx[] = {2, 1, -1, -2, -2, -1,  1,  2};
    const int dy[] = {1, 2,  2,  1, -1, -2, -2, -1};

    // breadth-first search
    queue<tuple<int,int,int>> q;
    q.emplace(startX, startY, 0);
    bool foundGoal = false;
    int resultDepth = -1;
    while(!q.empty() && !foundGoal) {
        auto [i, j, depth] = q.front();
        q.pop();

        // try to step in each direction
        for(int k = 0; k < 8; ++k) {
            int ni = i + dx[k];
            int nj = j + dy[k];

            // goal?
            if(ni == 0 && nj == 0) {
                foundGoal = true;
                resultDepth = depth + 1;
                break;
            }

            // in bounds?
            if(ni < 0 || ni >= n || nj < 0 || nj >= n) continue;

            // have we already visited that node, or is it an obstacle?
            if(grid[ni][nj] == 'v' || grid[ni][nj] == '#') continue;

            // defer processing
            q.emplace(ni, nj, depth + 1);

            // mark visited to prevent re-placement in the queue
            grid[ni][nj] = 'v';
        }
    }
    cout << resultDepth << endl;
}