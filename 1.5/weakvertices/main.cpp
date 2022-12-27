#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    while(std::cin >> n) {
        // end of input
        if(n == -1) break;

        // weak vertices to populate
        vector<int> weakVertices;

        // n x n adjacency matrix of a graph
        vector<vector<int>> graph(n, vector<int>(n,-1));
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                std::cin >> graph[i][j];
            }
        }
        // symmetric: graph[i][j] == graph[j][i]

        // find all vertices (i) which have two different
        // neighbors (j) and (k) such that (j) and (k) are
        // neighbors
        for(int i = 0; i < n; ++i) {
            bool inTriangle = false;
            for(int j = 0; j < n; ++j) {
                // are (i) and (j) neighbors?
                if(graph[i][j] != 1) continue;
                for(int k = 0; k < n; ++k) {
                    // are (i) and (k) neighbors?
                    if(graph[i][k] != 1) continue;
                    // are (j) and (k) neighbors?
                    if(graph[j][k] != 1) continue;
                    inTriangle = true;
                    break;
                }
                if(inTriangle) break;
            }
            // weak vertex
            if(!inTriangle) weakVertices.push_back(i);
        }
        if(!weakVertices.empty()) {
            for(int i = 0; i < weakVertices.size() - 1; ++i) {
                printf("%d ",weakVertices[i]);
            }
            printf("%d\n", weakVertices.back());
        }
        else printf("\n");
    }
}