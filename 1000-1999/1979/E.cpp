#include <iostream>
#include <vector>
#include <unordered_map>
#include <tuple>

using namespace std;

bool find_triangle(vector<pair<int, int>>& points, int d, vector<int>& result) {
    unordered_map<int, unordered_map<int, int>> point_map;
    for (int i = 0; i < points.size(); ++i) {
        point_map[points[i].first][points[i].second] = i + 1;
    }

    for (int i = 0; i < points.size(); ++i) {
        int x1 = points[i].first, y1 = points[i].second;

        vector<pair<int, int>> candidates = {
            {x1 + d, y1},
            {x1 - d, y1},
            {x1, y1 + d},
            {x1, y1 - d},
            {x1 + d / 2, y1 + d / 2},
            {x1 + d / 2, y1 - d / 2},
            {x1 - d / 2, y1 + d / 2},
            {x1 - d / 2, y1 - d / 2}
        };

        for (const auto& [x2, y2] : candidates) {
            if (point_map.count(x2) && point_map[x2].count(y2)) {
                for (const auto& [x3, y3] : candidates) {
                    if ((x2 != x3 || y2 != y3) && point_map.count(x3) && point_map[x3].count(y3)) {
                        int j = point_map[x2][y2];
                        int k = point_map[x3][y3];
                        result = {i + 1, j, k};
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<pair<int, int>> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
        }

        vector<int> result(3, 0);
        if (find_triangle(points, d, result)) {
            cout << result[0] << " " << result[1] << " " << result[2] << endl;
        } else {
            cout << "0 0 0" << endl;
        }
    }
    return 0;
}

