#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Y, W; cin >> Y >> W;
    const string prob[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int a = max(Y , W);
    cout << prob[a];
}
