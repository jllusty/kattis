#include <iostream>

int main(int argc, char* argv[]) {
    int megabytesPerMonth;
    int numMonthsReporting;
    std::cin >> megabytesPerMonth >> numMonthsReporting;
    int totalUsageForMonthsReporting = numMonthsReporting * megabytesPerMonth;
    for(int month = 0; month < numMonthsReporting; ++month) {
        int usageThisMonth;
        std::cin >> usageThisMonth;
        totalUsageForMonthsReporting -= usageThisMonth;
    }
    int totalUsageForAllMonths = totalUsageForMonthsReporting + megabytesPerMonth;
    std::cout << totalUsageForAllMonths << std::endl;
}