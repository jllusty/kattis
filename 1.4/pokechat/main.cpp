#include <iostream>

int main() {
    std::string encodedString, pokemonIds;
    std::getline(std::cin, encodedString);
    std::getline(std::cin, pokemonIds);
    for(int i = 0; i < pokemonIds.length() / 3; ++i) {
        std::string idSubString = pokemonIds.substr(3 * i, 3);
        int id = stoi(idSubString) - 1;
        std::cout << encodedString[id];
    }
    std::cout << std::endl;
}