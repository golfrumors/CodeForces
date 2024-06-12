#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b); // Efficient Euclidean Algorithm
}

int findY(int x) {
    int bestY = x - 1; // Initialize with x-1 for potential optimal case
    int highestSum = gcd(x, bestY) + bestY;

    // Prioritize minimizing GCD and breaking ties for maximum sum
    for (int y = x - 1; y >= 1; y--) {
        int currentGCD = gcd(x, y);
        int currentSum = currentGCD + y;  // Calculate sum for current y

        if (currentSum > highestSum) { // Find maximum sum of GCD + y
            bestY = y;
            highestSum = currentSum;
        } else if (currentSum == highestSum && y < bestY) { // Tiebreaker: smaller y
            bestY = y;  // Choose the smaller y if sums are equal
        } else if (currentSum == highestSum && currentGCD < gcd(x, bestY)) { // Tiebreaker: smaller GCD
            bestY = y;  // Choose the y leading to smaller GCD if sums are equal
        }
    }

    return bestY;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int y = findY(x);
        cout << y << endl;
    }

    return 0;
}

