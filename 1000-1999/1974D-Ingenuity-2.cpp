#include <iostream>
#include <map>
#include <utility>

using namespace std;

map<char, pair<int, int>> mp;

bool testPossible(string s, int a, int b, string direction);

int main()
{
int t;
    cin >> t;
    mp['N'] = {0, 1};
    mp['S'] = {0, -1};
    mp['E'] = {1, 0};
    mp['W'] = {-1, 0};

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            pair<int, int> move = mp[s[i]];
            x += move.first;
            y += move.second;
        }
        if (x % 2 != 0 || y % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        x = x / 2;
        y = y / 2;
        string res = s;
        if (x == 0 && y == 0)
        {
            int count[2] = {0, 0};
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'N')
                {
                    count[0]++;
                }
                if (s[i] == 'S')
                {
                    count[1]++;
                }
            }
            bool flag = false;
            if (count[0] != 0 && count[1] != 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'N')
                    {
                        res[i] = 'R';
                        break;
                    }
                }
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'S')
                    {
                        res[i] = 'R';
                        break;
                    }
                }
                for (int i = 0; i < n; i++)
                {
                    if (res[i] != 'R')
                    {
                        res[i] = 'H';
                    }
                }
                if (testPossible(res, x, y, s))
                {
                    flag = true;
                    cout << res << endl;
                }

            }
            if (!flag)
            {
                res = s;
                count[0]=0;
                count[1]=0;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'E')
                    {
                        count[0]++;
                    }
                    if (s[i] == 'W')
                    {
                        count[1]++;
                    }
                }

                if (count[0] != 0 && count[1] != 0)
                {
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'E')
                        {
                            res[i] = 'R';
                            break;
                        }
                    }
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'W')
                        {
                            res[i] = 'R';
                            break;
                        }
                    }
                    for (int i = 0; i < n; i++)
                    {
                        if (res[i] != 'R')
                        {
                            res[i] = 'H';
                        }
                    }
                    if (testPossible(res, x, y, s))
{
                        flag = true;
                        cout << res << endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        else if (x >= 0 && y >= 0)
        {

            int tx = 0, ty = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'E' && tx != x)
                {
                    tx++;
                    res[i] = 'R';
                }
                else if (s[i] == 'N' && ty != y)
                {
                    ty++;
                    res[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (res[i] != 'R')
                {
                    res[i] = 'H';
                }
            }
            if (testPossible(res, x, y, s))
            {
                cout << res << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (x <= 0 && y >= 0)
        {
            int tx = 0, ty = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'W' && tx != x)
                {
                    tx--;
                    res[i] = 'R';
                }
                else if (s[i] == 'N' && ty != y)
                {
                    ty++;
                    res[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (res[i] != 'R')
                {
                    res[i] = 'H';
                }
            }
            if (testPossible(res, x, y, s))
            {
                cout << res << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (x <= 0 && y <= 0)
        {
            int tx = 0, ty = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'W' && tx != x)
                {
                    tx--;
                    res[i] = 'R';
                }
                else if (s[i] == 'S' && ty != y)
                {
                    ty--;
                    res[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (res[i] != 'R')
                {
                    res[i] = 'H';
                }
            }
            if (testPossible(res, x, y, s))
            {
                cout << res << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            int tx = 0, ty = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'E' && tx != x)
                {
                    tx++;
                    res[i] = 'R';
                }
                else if (s[i] == 'S' && ty != y)
                {
                    ty--;
                    res[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (res[i] != 'R')
                {
                    res[i] = 'H';
                }
            }
            if (testPossible(res, x, y, s))
            {
                cout << res << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

bool testPossible(string s, int a, int b, string direction)
{
    int x = 0, y = 0, count = 0, countB = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'H')
            count++;
        else
            countB++;
    }

    if(count == 0 || countB == 0)
        return false;

    for(int i = 0; i < s.size(); i++)
        if(s[i] == 'H')
        {
            pair<int, int> move = mp[direction[i]];
            x += move.first;
            y += move.second;
        }

    if (x != a || y != b)
        return false;
    return true;
}
