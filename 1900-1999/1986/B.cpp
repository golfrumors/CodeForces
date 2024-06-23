#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using matrix = vector<vector<ll>>;

void readIn(matrix& mat) {
    for (auto& row : mat) 
        for (auto& cell : row) 
            cin >> cell;
}

void solve(matrix& mat, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            ll nMax = 0;
            bool flag = true;

            if (i > 0)
                nMax = max(nMax, mat[i - 1][j]);
            if (j > 0)
                nMax = max(nMax, mat[i][j - 1]);
            if (i < rows - 1)
                nMax = max(nMax, mat[i + 1][j]);
            if (j < cols - 1)
                nMax = max(nMax, mat[i][j + 1]);

            if (i > 0 && mat[i][j] <= mat[i - 1][j]) flag = false;
            if (j > 0 && mat[i][j] <= mat[i][j - 1]) flag = false;
            if (i < rows - 1 && mat[i][j] <= mat[i + 1][j]) flag = false;
            if (j < cols - 1 && mat[i][j] <= mat[i][j + 1]) flag = false;

            if (flag) {
                mat[i][j] = nMax;
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int M, N;
        cin >> M >> N;
        matrix mat(M, vector<ll>(N));

        readIn(mat);
        solve(mat, M, N);
        for (const auto& row : mat) {
	        for (const auto& cell : row){
	            cout << cell << " ";
	        }
	        cout << "\n";
	    }
    }

    return 0;
}
