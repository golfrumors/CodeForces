#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Env
{
    int w, h, i;
};

bool comp(const Env &a, const Env &b)
{
    if (a.w == b.w)
        return a.h < b.h;
    return a.w < b.w;
}

int main() {
    int n, w, h;
    cin >> n >> w >> h;

    vector<Env> Envs;
    for (int i = 0; i < n; ++i)
    {
        int wi, hi; cin >> wi >> hi;
        if (wi > w && hi > h)
        {
            Envs.push_back({wi, hi, i + 1});
        }
    }

    if (Envs.empty())
    {
        cout << "0" << endl;
        return 0;
    }

    sort(Envs.begin(), Envs.end(), comp);

    int maxLen = 0, endI = -1;
    vector<int> dp(Envs.size(), 1);
    vector<int> prev(Envs.size(), -1);

    for (int i = 0; i < Envs.size(); ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (Envs[i].w > Envs[j].w && Envs[i].h > Envs[j].h)
            {
                if (dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }
        }

        if (dp[i] > maxLen)
        {
            maxLen = dp[i];
            endI = i;
        }
    }

    vector<int> result;
    while (endI != -1)
    {
        result.push_back(Envs[endI].i);
        endI = prev[endI];
    }

    reverse(result.begin(), result.end());

    cout << maxLen << endl;

    for (int index : result)
        cout << index << " ";

    cout << endl;

}
