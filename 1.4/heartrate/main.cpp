#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        float b, p;
        std::cin >> b >> p;
        // minimum possible ABPM
        // beat at t = 0
        float minimumABPM = 60.f * (b - 1.0f) / p;

        // computed ABPM
        float computedABPM = 60.f * b / p;

        // maximum possible ABPM
        float maximumABPM = 60.f * (b + 1) / p;

        printf("%f %f %f\n",minimumABPM,computedABPM,maximumABPM);
    }
}