#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int n, k;

    cin >> n >> k;
    n = stoi(s);

    for(int i = 0; i < k; i++)
    {
	if((s[s.length() - 1] - '0') != 0) {
	    n--;
	    s = to_string(n);
	} else {
	    n /= 10;
	    s = to_string(n);
	}
    }

    cout << s;
}
