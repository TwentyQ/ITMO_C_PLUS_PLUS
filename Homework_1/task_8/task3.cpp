#include <iostream>
#include <vector>
#include <string>

int main() {
	std::string x;
	int i;

	std::cin >> x;

	std::vector<char> mas;

	for (char i : x) {
		if (i == 'G') {
			mas.push_back('C');
		}
		if (i == 'T') {
			mas.push_back('A');
		}
		if (i == 'C') {
			mas.push_back('G');
		}
		if (i == 'A') {
			mas.push_back('T');
		}
	}

	for (char y : mas) {
		std::cout << y;
	}
}