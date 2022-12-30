#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct Friend {
    string name;
    string birthday;
    int score;
};

int main() {
    int numFriends;
    cin >> numFriends;
    vector<Friend> friends;
    map<string, int> highestScoreForBirthday;
    for(int i = 0; i < numFriends; ++i) {
        string name, birthday;
        int score;
        cin >> name >> score >> birthday;
        Friend f;
        f.name = name;
        f.birthday = birthday;
        f.score = score;
        friends.push_back(f);
        if(highestScoreForBirthday.count(birthday)) {
            highestScoreForBirthday[birthday] = max(score, highestScoreForBirthday[birthday]);
        }
        else highestScoreForBirthday[birthday] = score;
    }

    // remove friends who share a birthday that don't have the highest score for that
    // birthday
    for(auto it = friends.begin(); it != friends.end(); ){
        if(it->score < highestScoreForBirthday[it->birthday]) {
            it = friends.erase(it);
        }
        else ++it;
    }

    // get their names
    vector<string> names;
    for(Friend& f: friends) names.push_back(f.name);
    sort(names.begin(),names.end());

    cout << names.size() << endl;
    for(int i = 0; i < names.size(); ++i) cout << names[i] << endl;
}