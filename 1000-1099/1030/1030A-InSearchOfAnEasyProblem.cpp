#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int tmp;
    while(n--)
    {
	cin >> tmp;
	if(tmp == 1)
	{
	    cout << "HARD";
	    return 0;
	}
    }

    cout << "EASY";
}
