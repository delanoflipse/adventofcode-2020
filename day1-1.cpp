// Example program
#include <iostream>
#include <string>

#include "day1-data.cpp"

int main(void) {
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if (i == j) {
				continue;
			}

			if (numbers[i] + numbers[j] == 2020) {
				std::cout << i << " and " << j << '\n';
				std::cout << numbers[i] << " * " << numbers[j] << " = " << numbers[i] * numbers[j] << '\n';
			}
		}
	}
	std::cout << "Done!\n";
}
