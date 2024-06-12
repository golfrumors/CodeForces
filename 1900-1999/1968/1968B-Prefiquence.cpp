#include <iostream>
#include <string>

using namespace std;

int findmax(string a, string b)
{
    int n = a.size();
    int m = b.size();

    int i = 0, j = 0;

    while ( i < n && j < m)
    {
	if(a[i] == b[j])
	    i++;
	j++;
    }

    return i;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
	int n, m;
	cin >> n >> m;

	string a, b;
	cin >> a >> b;
	int maxk = findmax(a, b);
	cout << maxk << endl;
    }
}
