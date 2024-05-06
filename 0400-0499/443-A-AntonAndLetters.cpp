#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	set<char> letters;
	for (int i = 1; i < s.size() - 1; i += 3) {
		letters.insert(s[i]);
	}
	cout << letters.size();
}
