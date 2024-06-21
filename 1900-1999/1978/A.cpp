#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> books(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> books[i];
        }
        std::sort(books.begin(), books.end());
        int maxPow = books[n-1] + books[n-2];
	std::cout << maxPow << std::endl;
    }
    return 0;
}

