#include <iostream>
#include <set>
#include <vector>

using namespace std;

struct Diagonal {
  int x;
  int y;
  int dir;  // Direction (1: down-right, -1: up-left)
};

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    // Handle special cases
    if (n == 2) {
      cout << "1 1\n" << "1 2\n";
    } else if (n == 3) {
      cout << "2 1\n" << "2 3\n" << "3 1\n";
    } else {
      // Precompute starting positions for each diagonal
      vector<Diagonal> diagonals;
      for (int i = 1; i <= n; i++) {
        diagonals.push_back({1, i, 1});  // Down-right diagonals
        if (i != n) {
          diagonals.push_back({i, 1, -1});  // Up-left diagonals (except for the last row)
        }
      }

      // Use a set to store unique (x, y) coordinates
      set<pair<int, int>> points;

      // Loop to place n points
      for (Diagonal d : diagonals) {
        int x = d.x, y = d.y;
        int dir = d.dir;

        for (int i = 0; i < n; i++) {
          // Check if within grid boundaries and not already placed
          if (x > 0 && x <= n && y > 0 && y <= n && points.count({x, y}) == 0) {
            points.insert({x, y});
            break;
          }

          // Handle edge cases and change direction if necessary
          if ((x == 1 && dir == 1) || (y == n && dir == -1)) {
            dir *= -1;
          }

          // Move to the next position on the diagonal
          x += dir;
          y -= dir;
        }
      }

      // Print points from the set
      for (auto p : points) {
        cout << p.first << " " << p.second << endl;
      }
    }
    cout << endl;
  }

  return 0;
}

