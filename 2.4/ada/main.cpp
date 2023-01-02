#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numEvals;
    cin >> numEvals;

    vector<int> evals(numEvals,-1);
    for(int i = 0; i < numEvals; ++i) cin >> evals[i];

    // build a big-ol grid of diffs up to order numEvals
    // get a vector of differences
    vector<vector<int>> diffs(numEvals,vector<int>(numEvals,-1));
    // 0-th order difference
    for(int i = 0; i < numEvals; ++i) {
        diffs[0][i] = evals[i];
    }
    // k-th
    for(int k = 1; k < numEvals; ++k) {
        for(int i = 0; i < numEvals - k; ++i) {
            diffs[k][i] = diffs[k-1][i+1] - diffs[k-1][i];
        }
    }

    // find degree
    int deg = -1;
    for(int k = 1; k < numEvals; ++k) {
        bool isSame = true;
        for(int i = 0; i < numEvals - k; ++i) {
            if(diffs[k][0] != diffs[k][i]) {
                isSame = false;
                break;
            }
        }
        if(isSame) {
            deg = k;
            break;
        }
    }

    // sum final diagonal for result
    int result = 0;
    for(int k = 0; k < numEvals; ++k) {
        result += diffs[numEvals - 1 - k][k];
    }
    printf("%d %d\n",deg,result);

    // print them
    bool debug = false;
    if(debug) {
        for(int k = 0; k < numEvals; ++k) {
            for(int i = 0; i < numEvals - k; ++i) {
                printf("%d ",diffs[k][i]);
            }
            printf("\n");
        }
    }
}