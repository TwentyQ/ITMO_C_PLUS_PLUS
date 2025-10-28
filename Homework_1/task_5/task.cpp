#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int x;
	int y;
	int res = 1;

	std::cin >> x;

	std::vector<int> mas;
    for (int i = 0; i < x; ++i) {
        std::cin >> y;
        mas.push_back(y);
    }

	std::sort(mas.begin(), mas.end());

	for (size_t i = 0; i < mas.size() - 1; ++i) {
		if (mas[i] == mas[i + 1]) {
			++res;
		}
	}

	std::cout << res;
}