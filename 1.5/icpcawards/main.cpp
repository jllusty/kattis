#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int numTeams;
    cin >> numTeams;
    // teams that have been awarded
    set<string> awardedUniversites;
    // universities that have had a placing team
    vector<string> awardedTeams;
    for(int i = 0; i < numTeams; ++i) {
        string university, team;
        cin >> university >> team;

        // if we've awarded a university already, continue
        if(!awardedUniversites.count(university)) {
            if(awardedTeams.size() == 12) continue;
            awardedUniversites.insert(university);
            awardedTeams.push_back(university + " " + team);
        }
    }
    for(string team : awardedTeams) printf("%s\n",team.c_str());
}