#include <iostream>

using namespace std;

int main()
{
    int w, k, n, totalCost = 0;
    cin >> k >> n >> w;
    for (int i = 0; i < w; i++) {
	totalCost += (k * (i+1));
    }
    (totalCost <= n) ? cout << 0 : cout << totalCost - n;
}
