#include <iostream>


// day 1 is the first day
// month 1 is the first month
int numDaysSinceJanFirst(int day, int month) {
    const int MONTH_LENGTHS[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysFromPriorMonths = 0;
    for(int priorMonth = 1; priorMonth < month; ++priorMonth) {
        daysFromPriorMonths += MONTH_LENGTHS[priorMonth - 1];
    }
    return (day - 1) + daysFromPriorMonths;
}

// [0, 1, 2, 3, 4, 5, 6]
// [S, M, T, W, R, F, S]
std::string weekDayToString(int weekDay) {
    if(weekDay == 0) return("Sunday");
    else if(weekDay == 1) return("Monday");
    else if(weekDay == 2) return("Tuesday");
    else if(weekDay == 3) return("Wednesday");
    else if(weekDay == 4) return("Thursday");
    else if(weekDay == 5) return("Friday");
    else return("Saturday");
}

int main() {
    int day, month;
    std::cin >> day >> month;
    int numDays = numDaysSinceJanFirst(day, month);
    int weekDay = (numDays + 4) % 7;
    std::cout << weekDayToString(weekDay) << std::endl;
}