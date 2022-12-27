#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int numTestCases;
    cin >> numTestCases;
    string throwaway;
    getline(cin, throwaway);
    for(int i = 0; i < numTestCases; ++i) {
        string line;
        getline(cin, line);
        //printf("line = '%s'\n",line.c_str());
        // separate line into integers
        istringstream iss(line);
        int lastPopulation = -1, tourists = 0, population;
        while(iss >> population) {
            //printf("line > %d\n",population);
            // end of input line delimiter
            if(population == 0) continue;

            // compare current and last population
            if(lastPopulation != -1) {
                if(population > 2 * lastPopulation) {
                    tourists += population - 2 * lastPopulation;
                }
            }
            lastPopulation = population;
        }
        //printf("tourists = %d\n",tourists);
        printf("%d\n",tourists);
    }
}