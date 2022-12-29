#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float squareArea;
    cin >> squareArea;
    float sideLength = sqrt(squareArea);
    float squarePermimeter = 4.f * sideLength;
    cout << setprecision(12) << squarePermimeter << endl;
}