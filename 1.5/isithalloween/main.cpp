#include <iostream>

using namespace std;

int main() {
    string month, day;
    cin >> month >> day;
    if(month == "OCT" && day == "31") printf("yup\n");
    else if(month == "DEC" && day == "25") printf("yup\n");
    else printf("nope\n");
}