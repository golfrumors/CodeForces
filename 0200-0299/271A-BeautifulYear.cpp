#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int year;
    cin >> year;
    year++;
    while (true) {
    	string s = to_string(year);
    	set<char> st;
    	for (char c : s)
    	    st.insert(c);
    	if (st.size() == s.size()) {
    	    cout << year << endl;
    	    break;
    	}
    	year++;
    }
}
