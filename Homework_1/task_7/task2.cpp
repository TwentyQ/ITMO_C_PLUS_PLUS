#include <iostream>

int main() {
	int x, y;
	int res = -1;

	std::cin >> x >> y;

	for (x; x < y; ++x) {
		if (x % 7 == 0) {
			res = x;
		}
	}

	std::cout << res;
}
