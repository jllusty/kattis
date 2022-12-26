#include <iostream>

int main() {
    std::string str;
    std::getline(std::cin, str);
    std::string lastThreeSubstr = str.substr(str.length() - 3, 3);
    if(lastThreeSubstr == "eh?") printf("Canadian!\n");
    else printf("Imposter!\n");
}