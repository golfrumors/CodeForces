#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int N, M; cin >> N >> M;
        string s;
        cin >> s;
        vector<int> uIdx(M);
        for (int &d : uIdx)
            cin >> d;
        
        string uChar;
        cin >> uChar;

        set<int> uqIdx(uIdx.begin(), uIdx.end());
        vector<int> sIdx(uqIdx.begin(), uqIdx.end());
        sort(sIdx.begin(), sIdx.end());
        sort(uChar.begin(), uChar.end());

        map<int, char> idxC;
        for (size_t i = 0; i < sIdx.size(); ++i) {
            idxC[sIdx[i]] = uChar[i];
        }

        for (const auto &kv : idxC) {
            s[kv.first - 1] = kv.second;
        }

        cout << s << endl;
    }

    return 0;
}
