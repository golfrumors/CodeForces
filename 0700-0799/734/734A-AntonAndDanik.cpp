#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, d = 0;
    cin >> n;
    char game;

    for(int i = 0; i < n; i++)
    {
	cin >> game;
	if(game == 'A')
	    a++;
	else
	    d++;
    }

    if(a > d)
	cout << "Anton";
    else if(d > a)
	cout << "Danik";
    else
	cout << "Friendship";
}
