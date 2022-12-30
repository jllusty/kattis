#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const float PI = 4.f * atan(1.f);

int main() {
    int numTestCases;
    cin >> numTestCases;
    for(int i = 0; i < numTestCases; ++i) {
        int numSegments;
        cin >> numSegments;
        // start by facing +Y at (0,0)
        float orientation = 90.f;
        float positionX = 0.f, positionY = 0.f;
        for(int j = 0; j < numSegments; ++j) {
            float dOrientation, length;
            cin >> dOrientation >> length;
            // change orientation
            orientation += dOrientation;
            // move length in orientation
            float dX = length * cos(orientation / 180.f * PI);
            float dY = length * sin(orientation / 180.f * PI);
            positionX += dX;
            positionY += dY;
        }
        cout << setprecision(12) << positionX << " " << positionY << endl;
    }
}