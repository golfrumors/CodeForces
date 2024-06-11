#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        long long bH;
        int numA;
        cin >> bH >> numA;

        vector<long long> dmg(numA);
        vector<int> cd(numA);

        for (int i = 0; i < numA; i++)
            cin >> dmg[i];
        
        for (int i = 0; i < numA; i++)
            cin >> cd[i];

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> atkQ;
        
        for (int i = 0; i < numA; i++)
            atkQ.push({1, i});

        long long currT = 0;
        while (bH > 0) {
            currT = atkQ.top().first;

            long long totDmgT = 0;

            while (!atkQ.empty() && atkQ.top().first == currT) {
                int ind = atkQ.top().second;
                atkQ.pop();

                totDmgT += dmg[ind];
                atkQ.push({currT + cd[ind], ind});
            }

            bH -= totDmgT;
        }

        cout << currT << endl;
    }

}
