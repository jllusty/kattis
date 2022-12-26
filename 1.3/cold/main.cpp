#include <iostream>

int main() {
    int numTemperatures;
    std::cin >> numTemperatures;
    int countOfTempsBelowZero = 0;
    for(int i = 0; i < numTemperatures; ++i) {
        int temperature;
        std::cin >> temperature;
        countOfTempsBelowZero += (temperature < 0) ? 1 : 0;
    }
    printf("%d\n",countOfTempsBelowZero);
}