#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int time = 240 - k;
    int i = 1;
    while (time >= 5 * i && i <= n)
    {   
	time -= 5 * i;
    	i++;
    }

    cout << i - 1 << endl;
}
