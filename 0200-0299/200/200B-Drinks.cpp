#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float arr[n];
    float sum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        sum += (float)(arr[i]/100);
    }

    cout << ((sum / n) * 100);

    return 0;
}
