#include <iostream>

int main() {
	int x;
	int y = 1;

	std::cin >> x;

	while (y < x) {
		std::cout << y << " ";
		y *= 2;
	}
}