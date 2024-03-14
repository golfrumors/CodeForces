#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> res;
    stringstream ss;
    string s, in;
    cin >> in;
    while(getline(ss, in, '+'))
    	res.push_back(in);

    sort(res.begin(), res.end());
    for(int i = 0; i < res.size(); i++) {
		cout << res[i];
		if(i != res.size() - 1) cout << "+";
    }
}
