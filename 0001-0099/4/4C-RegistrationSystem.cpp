#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<std::string, int> students;
    std::vector<std::string> names;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
    	std::string name;
    	std::cin >> name;
    	if (students.find(name) == students.end()) {
    		students[name] = 0;
		names.push_back("OK");
    	} else {
    		students[name]++;
		names.push_back(name + std::to_string(students[name]));
    	}
    }
    for (int i = 0; i < n; i++) {
    	std::cout << names[i] << std::endl;
    }
	return 0;
}

