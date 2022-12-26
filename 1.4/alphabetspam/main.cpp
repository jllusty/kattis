#include <iostream>
#include <iomanip>

int main() {
    std::string input;
    std::getline(std::cin, input);
    int countWhitespace = 0, countLowercase = 0, countUppercase = 0, countSymbols = 0;
    for(char c : input) {
        if(c == '_') ++countWhitespace;
        else if(c <= 'z' && c >= 'a') ++countLowercase;
        else if(c <= 'Z' && c >= 'A') ++countUppercase;
        else ++countSymbols;
    }
    float ratioWhitespace = ((float)countWhitespace)/((float)input.length());
    float ratioLowercase = ((float)countLowercase)/((float)input.length());
    float ratioUppercase = ((float)countUppercase)/((float)input.length());
    float ratioSymbols = ((float)countSymbols)/((float)input.length());
    std::cout << std::setprecision(12) << ratioWhitespace << std::endl;
    std::cout << std::setprecision(12) << ratioLowercase << std::endl;
    std::cout << std::setprecision(12) << ratioUppercase << std::endl;
    std::cout << std::setprecision(12) << ratioSymbols << std::endl;
2