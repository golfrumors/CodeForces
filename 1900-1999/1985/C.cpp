#include <bits/stdc++.h>

using namespace std;

int main() {
    auto cntHP = [](const vector<long long>& seq) -> long long {
        unordered_set<long long> seen; 
        long long sum = 0, pCnt = 0;

        for (const auto& elem : seq) {
            sum += elem;
            seen.insert(elem);

            if (sum % 2 == 0) {
                long long half = sum / 2;
                if (seen.count(half)) {
                    pCnt++;
                }
            }
        }
        return pCnt;
    };

    int t; cin >> t;

    while(t--) {
        int seqS; cin >> seqS;
        vector<long long> seq(seqS);
        
        for(int i = 0; i < seqS; ++i)
            cin >> seq[i];

        cout << cntHP(seq) << endl;
    }
}
