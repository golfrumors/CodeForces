#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isProper(const string& s, int k) {
    int n = s.length();
    for (int i = 1; i < k; ++i)
        if (s[i] != s[0]) return false;

    for (int i = 0; i < n - k; ++i)
        if (s[i] == s[i + k]) return false;

    return true;
}

int makeProper(const string& s, int n, int k) {
    if (count(s.begin(), s.end(), s[0]) == n)
        return n;

    if (count(s.begin(), s.end(), s[0]) == n) {
        for (int p = 1; p <= n; ++p) {
            string prefixRev = s.substr(0, p);
            reverse(prefixRev.begin(), prefixRev.end());
            string newS = prefixRev + s.substr(p);

            string shifted = newS.substr(p) + newS.substr(0, p);

            if (isProper(shifted, k)) {
                return p;
            }
        }
        return -1;
    }

    for (int p = 1; p <= n; ++p) {
        string prefixRev = s.substr(0, p);
        reverse(prefixRev.begin(), prefixRev.end());
        string newS = prefixRev + s.substr(p);

        string shiftedS = newS.substr(p) + newS.substr(0, p);

        if (isProper(shiftedS, k)) {
            return p;
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    vector<int> res(t);

    for (int i = 0; i < t; ++i) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        res[i] = makeProper(s, n, k);
    }

    for (int result : res)
        cout << result << endl;

}

