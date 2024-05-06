/*
 *Harry Potter is hiking in the Alps surrounding Lake Geneva. In this area there are m cabins, numbered 1 to m. Each cabin is connected, with one or more trails, to a central meeting point next to the lake. Each trail is either short or long. Cabin i is connected with si short trails and li

long trails to the lake.

Each day, Harry walks a trail from the cabin where he currently is to Lake Geneva, and then from there he walks a trail to any of the m

cabins (including the one he started in). However, as he has to finish the hike in a day, at least one of the two trails has to be short.

How many possible combinations of trails can Harry take if he starts in cabin 1 and walks for n

days?

Give the answer modulo 109+7

.
Input

The first line contains the integers m
and n

.

The second line contains m
integers, s1,…,sm, where si is the number of short trails between cabin i

and Lake Geneva.

The third and last line contains m
integers, l1,…,lm, where li is the number of long trails between cabin i

and Lake Geneva.

We have the following constraints:

0≤si,li≤103

.

1≤m≤102

.

1≤n≤103

.
Output

The number of possible combinations of trails, modulo 109+7
.
 */

#include <iostream>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int s[m], l[m];
	for (int i = 0; i < m; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> l[i];
	}
	int dp[m][n + 1][2];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j <= n; j++) {
			dp[i][j][0] = 0;
			dp[i][j][1] = 0;
		}
	}
	dp[0][0][0] = 1;
	dp[0][0][1] = 1;
	for (int i = 1; i < m; i++) {
		dp[i][0][0] = 0;
		dp[i][0][1] = 0;
	}
	for (int i = 1; i <= n; i++) {
		dp[0][i][0] = (dp[0][i - 1][0] + dp[0][i - 1][1]) % 1000000007;
		dp[0][i][1] = (dp[0][i - 1][0] + dp[0][i - 1][1]) % 1000000007;
	}
	for (int i = 1; i < m; i++) {
		for (int j = 1; j <= n; j++) {
			dp[i][j][0] = (dp[i - 1][j][0] + dp[i - 1][j][1]) % 1000000007;
			dp[i][j][1] = (dp[i - 1][j][0] + dp[i - 1][j][1]) % 1000000007;
			for (int k = 1; k <= j; k++) {
				dp[i][j][0] = (dp[i][j][0] + dp[i - 1][j - k][1] * s[i] % 1000000007 * dp[i - 1][k - 1][0] % 1000000007) %

				1000000007;
				dp[i][j][1] = (dp[i][j][1] + dp[i - 1][j - k][0] * l[i] % 1000000007 * dp[i - 1][k - 1][1] % 1000000007) %

				1000000007;
			}
		}
	}
	cout << (dp[m - 1][n][0] + dp[m - 1][n][1]) % 1000000007 << endl;
	return 0;
}
