#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int len; cin >> len;
        string in; cin >> in;
        
        if (len == 2) {
            if (in.front() == '0') {
                cout << in.back() << endl;
            } else {
                cout << in << endl;
            }
            continue;
        }
        
        bool notF = false;
        for (char digit : in) {
            if (digit == '0') {
                notF = true;
                break;
            }
        }
        
        long long minRes = 1000000000000000000LL;
        
        if (notF) {
            if (len >= 4) {
                cout << 0 << endl;
            } else {
                if (in[1] == '0') {
                    int fNum = in[0] - '0';
                    int tNum = in[2] - '0';
                    minRes = min(fNum + tNum, fNum * tNum);
                    cout << minRes << endl;
                } else {
                    cout << 0 << endl;
                }
            }
            continue;
        }
        
        for (int i = 0; i < len - 1; i++) {
            vector<int> nums;
            for (int j = 0; j < len; j++) {
                if (j == i) {
                    string combDig = "";
                    combDig += in[j];
                    combDig += in[++j];
                    nums.push_back(stoi(combDig));
                } else {
                    string sDig = "";
                    sDig += in[j];
                    nums.push_back(stoi(sDig));
                }
            }
            
            int accum = nums.front();
            accum = (accum == 1) ? 0 : accum;
            
            for (size_t idx = 1; idx < nums.size(); idx++) {
                if (nums[idx] == 1) continue;
                accum += nums[idx];
            }
            
            minRes = min(minRes, static_cast<long long>(accum));
        }
        
        cout << minRes << endl;
    }

    return 0;
}
