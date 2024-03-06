#include <iostream>

int main() {
    int d, minTime, maxTime, sumTime = 0;

    std::cin >> d >> minTime >> maxTime;

    for (int i = 0; i < d; i++) {
        int time;
        std::cin >> time;
        sumTime += time;
    }

    if (sumTime < minTime * d || sumTime > maxTime * d) {
        std::cout << "NO";
    } else {
        std::cout << "YES\n";
        int remainingTime = sumTime;
        for (int i = 0; i < d; i++) {
            int time = std::min(maxTime, remainingTime - minTime * (d - i - 1));
            remainingTime -= time;
            std::cout << time << " ";
        }
    }

    return 0;
}