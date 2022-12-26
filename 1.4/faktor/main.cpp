#include <iostream>
#include <cmath>

int main() {
    int numArticlesToPublish, requiredImpactFactor;
    std::cin >> numArticlesToPublish >> requiredImpactFactor;
    // desire least X such that ceil(x/numArticlesToPublish) = requiredImpactFactor
    // in c++ integer division floors, so ceil(x/y) = (x + y - 1)/y
    for(int numScientists = 1; numScientists <= 100 * 100; ++numScientists) {
        if((numScientists + numArticlesToPublish - 1)/numArticlesToPublish >= requiredImpactFactor) {
            printf("%d\n",numScientists);
            break;
        }
    }
}