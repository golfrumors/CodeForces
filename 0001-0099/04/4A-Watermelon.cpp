#include <iostream>
 
int main() {
    int w;
    std::cin >> w;
    (w % 2 == 0 && w > 2) ? std::cout << "YES" : std::cout << "NO";
    return 0;
}