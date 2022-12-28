#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int numButtonPackages;
    cin >> numButtonPackages;
    int numPinkOrRoseButtons = 0;
    for(int i = 0; i < numButtonPackages; ++i) {
        string name;
        cin >> name;
        for(char& c : name) c = tolower(c);
        if(name.find("pink") != -1 || name.find("rose") != -1) ++numPinkOrRoseButtons;
    }
    if(numPinkOrRoseButtons > 0) printf("%d\n",numPinkOrRoseButtons);
    else printf("I must watch Star Wars with my daughter\n");
}