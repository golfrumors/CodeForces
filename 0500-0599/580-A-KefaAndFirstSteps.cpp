#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	int dp[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		dp[i] = 1;
	}
	for (int i = 1; i < n; i++) {
		if (a[i] >= a[i - 1])
			dp[i] = dp[i - 1] + 1;
	}
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (dp[i] > max)
			max = dp[i];
	}
	cout << max;
	return 0;
}
