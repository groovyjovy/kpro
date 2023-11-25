#include <iostream>
#include <cmath>
#include <limits>

int main() {
    long long D;
    std::cin >> D;

    long long x = static_cast<long long>(sqrt(D));
    long long y = 0;
    long long minDiff = std::numeric_limits<long long>::max();

    while (x >= 0 && y <= x) {
        long long current = x*x + y*y;
        long long diff = std::abs(current - D);

        if (diff < minDiff) {
            minDiff = diff;
        }

        if (current > D) {
            --x;
        } else {
            ++y;
        }
    }

    std::cout << minDiff << std::endl;
    return 0;
}
