#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

const float PI = 4.f * atan(1.f);

int main() {
    string line;
    while(getline(cin,line)) {
        if(line == "0 0 0") break;
        istringstream iss(line);
        float radius, numPoints, numCirclePoints;
        iss >> radius >> numPoints >> numCirclePoints;
        float area = PI * radius * radius;
        float estimate = (2.f * radius) * (2.f * radius) * numCirclePoints / numPoints;
        cout << setprecision(12) << area << " " << estimate << endl;
    }
}