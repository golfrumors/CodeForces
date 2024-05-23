#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int transitions = 0;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == '1' && s[i - 1] == '0') {
                transitions++;
            }
        }
        // If the string is already sorted, only one piece is needed
        if (transitions == 0) {
            cout << 1 << endl;
        } else {
            // Otherwise, the minimum number of pieces is the number of transitions plus one
            cout << transitions + 1 << endl;
        }
    }
    return 0;
}

