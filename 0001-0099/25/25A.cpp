#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, cntOdd = 0, cntEven = 0, lastOdd, lastEven;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
	cin >> v[i];

    for(int i = 0; i < v.size(); ++i)
    {
	if(v[i] % 2 == 0)
	{
	    cntEven++;
	    lastEven = i;
	}
	else
	{
	    cntOdd++;
	    lastOdd = i;
	}
    }

    cout << ((cntEven > cntOdd) ? lastOdd : lastEven) + 1;

}
