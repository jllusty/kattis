#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

const float PI = 4.f * atan(1.f);

int main() {
    int numTriangles;
    cin >> numTriangles;
    float lengthOfRod = 0.f;
    for(int i = 0; i < numTriangles; ++i) {
        float a, b, c;
        cin >> a >> b >> c;
        // let a > b
        if(a < b) swap(a,b);
        // let side c lie flat on the x axis, with AC at (0, 0)
        // determine the vector for side A = <aX, aY>
        float beta = acos((a*a + c*c - b*b)/(2.f*a*c));
        float aX = a * cos(beta), aY = a * sin(beta);
        // determine the centroid and its incident angle from the +X-axis
        float cenX = (aX + c) / 3.f, cenY = aY / 3.f;

        // determine the incident angle that the line from AB to the centroid
        // makes with a vertical at AB
        float dot = cenY - aY;
        float rho = acos(dot/(hypot(aX - cenX,aY - cenY)));
        // rotate side C by this angle, and find its extent in X
        float xCrot = cos(rho)*c;
        float xExtent = abs(xCrot);

        // update the length of the rod
        lengthOfRod += xExtent;
    }
    cout << setprecision(12) << lengthOfRod << endl;
}