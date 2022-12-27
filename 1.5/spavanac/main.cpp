#include <iostream>

using namespace std;

int main() {
    int hours, minutes;
    cin >> hours >> minutes;
    if(minutes < 45) {
        if(hours == 0) hours = 23;
        else --hours;
        minutes = 60 - (45 - minutes);
    }
    else {
        minutes -= 45;
    }
    printf("%d %d\n", hours, minutes);
}