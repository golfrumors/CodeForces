#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    // Array to store input x values
    int x[n];

    // Initialize array a with 1s
    int a[n];
    fill(a, a + n, 1);

    // Read x values
    for (int i = 1; i < n; i++) {
      cin >> x[i];
    }

    // Reconstruct a based on given x values
    for (int i = n - 1; i >= 1; i--) {
      // Check for division by zero (a[i] is 1 during initialization)
      if (a[i] == 0) {
        a[i - 1] = -1; // Set a placeholder value (can be any value not in range 1 to 10^9)
      } else {
        a[i - 1] = (x[i] + a[i]) % a[i];
      }
    }

    // Print the reconstructed array
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }

  return 0;
}

