#include <iostream>

int main() {
    int fizzDivisor, buzzDivisor, numIntsToPrint;
    std::cin >> fizzDivisor >> buzzDivisor >> numIntsToPrint;
    for(int i = 1; i <= numIntsToPrint; ++i) {
        bool isFizz = (i % fizzDivisor == 0);
        bool isBuzz = (i % buzzDivisor == 0);
        if(isFizz && isBuzz) printf("FizzBuzz\n");
        else if(isFizz) printf("Fizz\n");
        else if(isBuzz) printf("Buzz\n");
        else printf("%d\n",i);
    }
}