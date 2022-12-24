#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    // the maximal quadrilateral is a cyclic quadrilateral
    double semiperimeter = (a + b + c + d)/2;
    double area = sqrt((semiperimeter - a) * (semiperimeter - b) * (semiperimeter - c) * (semiperimeter - d));
    std::cout << std::setprecision(12) << area << std::endl;
}