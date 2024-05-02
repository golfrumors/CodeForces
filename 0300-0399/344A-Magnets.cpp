#include <iostream>

using namespace std;

int main()
{
    int n, i = 0, groups = 1;
    cin >> n;
    string arr[n];
    cin >> arr[i];
    i++;
    n--;
    while(n--){
	cin >> arr[i];
	if(arr[i][0] == arr[i-1][1])
	    groups++;
	i++;
    }
    cout << groups;
}
