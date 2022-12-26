#include <iostream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    for(int i = 0; i < input.length() - 1; ++i) {
        // look for 3-char smiles
        if(i + 2 <= input.length() - 1) {
            if((input[i] == ':' || input[i] == ';') && input[i+1] == '-' && input[i+2] == ')')
                printf("%d\n",i);
        }
        if((input[i] == ':' || input[i] == ';') && input[i+1] == ')')
            printf("%d\n",i);
    }
}