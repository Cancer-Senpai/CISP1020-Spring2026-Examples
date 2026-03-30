#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	// Create a vector called cars that will store strings
	vector<string> fish = {"Whale shark", "Bluegill", "Manta ray", "Sunfish"};

	// Create a vector iterator called it
	vector<string>::iterator it;

	// Loop through the vector with the iterator
	for (it = fish.begin(); it != fish.end(); it++) {
		cout << *it << "\n";
	}

	//alternatively use auto to automatically determine data type
	for (auto i = fish.begin(); i != fish.end(); i++) {
		cout << *i << "\n";
	}

	//or go backwards
	for (auto i = fish.rbegin(); i != fish.rend(); i++) {
		cout << *i << "\n";
	}

	return 0;
}