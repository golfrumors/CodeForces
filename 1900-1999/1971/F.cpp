#include <iostream>
#include <cmath>

using namespace std;

int countLatticePoints(int r) {
    int count = 0;
    // Iterate through all possible x values
    for (int x = 0; x <= r; x++) {
        // Calculate the maximum y value for the current x
        int yMax = sqrt(r*r - x*x);
        // Calculate the minimum y value for the current x
        int yMin = (x > r - 1)? 0 : sqrt((r-1)*(r-1) - x*x);
        // Add the number of points in the current x slice
        count += yMax - yMin + 1;
    }
    // Multiply by 4 to account for all quadrants
    return count * 4;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r;
        cin >> r;
        cout << countLatticePoints(r) << endl;
    }
    return 0;
}

