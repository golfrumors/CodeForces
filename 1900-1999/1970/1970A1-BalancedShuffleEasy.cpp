#include <iostream>
#include <algorithm>

using namespace std;

struct StringData {
    int pref;
    int pos;
    char c;
};

bool comp(const StringData&a, const StringData& b)
{
    if(a.pref == b.pref)
        return a.pos > b.pos;

    return a.pref < b.pref;
}

int main() {
    string s;
    cin >> s;
    StringData t[s.length()];

    t[0].c = s[0];
    t[0].pos = 0;
    t[0].pref = (s[0] == '(') ? 1 : -1;

    for(size_t i = 1; i < s.length(); i++) {
        t[i].c = s[i];
        t[i].pos = i;

        t[i].pref = t[i - 1].pref + ((s[i] == '(') ? 1 : -1);
    }

    for(size_t i = s.length() - 1; i >= 1; i--) {
        t[i].pref = t[i - 1].pref;
    }
    t[0].pref = 0;

    sort(t, t + s.length(), comp);

    for (size_t i = 0; i < s.length(); i++)
    {
        cout << t[i].c;
    }

    return 0;
}
