#include <iostream>

using namespace std;

int main()
{
    int res, a, b, c;
    cin >> a >> b >> c;

    res = a + b + c;
    res=max(res,(a*b*c));
	res=max(res,(a+b)*c);
	res=max(res,a*(b+c));
	res=max(res,a+(b*c));
	res=max(res,(a*b)+c);

	cout << res;
}
