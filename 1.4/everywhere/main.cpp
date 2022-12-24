#include <iostream>
#include <set>

int main() {
    int numWorkTrips;
    std::cin >> numWorkTrips;
    for(int i = 0; i < numWorkTrips; ++i) {
        int numTrips;
        std::cin >> numTrips;
        std::set<std::string> visited;
        for(int j = 0; j < numTrips; ++j) {
            std::string city;
            std::cin >> city;
            visited.insert(city);
        }
        std::cout << visited.size() << std::endl;
    }
}