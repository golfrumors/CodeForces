/*
 * D. Mysterious Present
time limit per test
1 second
memory limit per test
64 megabytes
input
standard input
output
standard output

Peter decided to wish happy birthday to his friend from Australia and send him a card. To make his present more mysterious, he decided to make a chain. Chain here is such a sequence of envelopes A = {a1,  a2,  ...,  an}, where the width and the height of the i-th envelope is strictly higher than the width and the height of the (i  -  1)-th envelope respectively. Chain size is the number of envelopes in the chain.

Peter wants to make the chain of the maximum size from the envelopes he has, the chain should be such, that he'll be able to put a card into it. The card fits into the chain if its width and height is lower than the width and the height of the smallest envelope in the chain respectively. It's forbidden to turn the card and the envelopes.

Peter has very many envelopes and very little time, this hard task is entrusted to you.
Input

The first line contains integers n, w, h (1  ≤ n ≤ 5000, 1 ≤ w,  h  ≤ 106) — amount of envelopes Peter has, the card width and height respectively. Then there follow n lines, each of them contains two integer numbers wi and hi — width and height of the i-th envelope (1 ≤ wi,  hi ≤ 106).
Output

In the first line print the maximum chain size. In the second line print the numbers of the envelopes (separated by space), forming the required chain, starting with the number of the smallest envelope. Remember, please, that the card should fit into the smallest envelope. If the chain of maximum size is not unique, print any of the answers.

If the card does not fit into any of the envelopes, print number 0 in the single line.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
using namespace std;

int main() {
	int n, w, h;
	cin >> n >> w >> h;
	vector<pair<int, pair<int, int> > > envelopes;
	for (int i = 0; i < n; i++) {
		int wi, hi;
		cin >> wi >> hi;
		envelopes.push_back(make_pair(wi, make_pair(hi, i + 1)));
	}
	sort(envelopes.begin(), envelopes.end());
	vector<int> dp(n, 1);
	vector<int> prev(n, -1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (envelopes[i].first > envelopes[j].first && envelopes[i].second.first > envelopes[j].second.first) {
				if (dp[i] < dp[j] + 1) {
					dp[i] = dp[j] + 1;
					prev[i] = j;
				}
			}
		}
	}
	int maxIndex = -1;
	int maxVal = 0;
	for (int i = 0; i < n; i++) {
		if (dp[i] > maxVal) {
			maxVal = dp[i];
			maxIndex = i;
		}
	}
	if (maxVal == 0) {
		cout << 0 << endl;
	} else {
		cout << maxVal << endl;
		stack<int> s;
		while (maxIndex != -1) {
			s.push(envelopes[maxIndex].second.second);
			maxIndex = prev[maxIndex];
		}
		while (!s.empty()) {
			cout << s.top() << " ";
			s.pop();
		}
		cout << endl;
	}
	return 0;
}


