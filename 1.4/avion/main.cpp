#include <iostream>
#include <vector>

int main() {
    int numRows = 5;
    std::vector<int> FBIBlimps;
    for(int i = 0; i < numRows; ++i) {
        std::string code;
        std::cin >> code;
        for(int j = 0; j <= code.length() - 3; ++j) {
            if(code[j] == 'F' && code[j + 1] == 'B' && code[j+2] == 'I') {
                FBIBlimps.push_back(i+1);
                break;
            }
        }
    }
    if(FBIBlimps.size() == 0) printf("HE GOT AWAY!\n");
    else {
        for(int i = 0; i < FBIBlimps.size() - 1; ++i) printf("%d ", FBIBlimps[i]);
        printf("%d\n", FBIBlimps.back());
    }
}