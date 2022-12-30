#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    istringstream iss(line);
    string nums;
    int totalProblems = 0;
    while(getline(iss, nums, ';')) {
        if(nums.find('-') != -1) {
            int num1 = stoi(nums.substr(0,nums.find('-')));
            int num2 = stoi(nums.substr(nums.find('-')+1));
            totalProblems += (num2 - num1) + 1;
        }
        else {
            totalProblems += 1;
        }
    }
    printf("%d\n",totalProblems);
}