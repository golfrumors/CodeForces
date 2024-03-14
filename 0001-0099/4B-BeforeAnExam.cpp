#include <iostream>

int main() {
    int d, sumTime;
    std::cin >> d >> sumTime;
    int minTime[d], maxTime[d];
    int minSum = 0, maxSum = 0;
    for (int i = 0; i < d; i++) {
		std::cin >> minTime[i] >> maxTime[i];
		minSum += minTime[i];
		maxSum += maxTime[i];
	}

    if (sumTime < minSum || sumTime > maxSum) {
	std::cout << "NO";
    } else {
	std::cout << "YES\n";
	int remainingTime = sumTime - minSum;
	for (int i = 0; i < d; i++) {
	    int time = std::min(remainingTime, maxTime[i] - minTime[i]);
	    std::cout << minTime[i] + time << " ";
	    remainingTime -= time;
	}
    }

    return 0;
}
