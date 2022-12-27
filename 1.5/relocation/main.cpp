#include <iostream>
#include <vector>

using namespace std;

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int numCompanies, numRequests;
    cin >> numCompanies >> numRequests;
    // set initial location of companies
    vector<int> locations(numCompanies+1, -1);
    for(int i = 1; i <= numCompanies; ++i) {
        cin >> locations[i];
        //printf("company %d at location %d\n",i,locations[i]);
    }
    // handle requests
    for(int i = 0; i < numRequests; ++i) {
        int requestType;
        cin >> requestType;
        // update location
        if(requestType == 1) {
            int company, location;
            cin >> company >> location;
            locations[company] = location;
        }
        // get distance between companies
        else {
            int companyA, companyB;
            cin >> companyA >> companyB;
            //printf("company A = %d at location %d\n",companyA,locations[companyA]);
            //printf("company B = %d at location %d\n",companyB,locations[companyB]);
            cout << abs(locations[companyB] - locations[companyA]) << endl;
        }
    }
}