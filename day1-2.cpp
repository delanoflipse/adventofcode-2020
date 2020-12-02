#include <iostream>
#include <string>

#include "day1-data.cpp"

int main(void) {
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			for (int k = j; k < N; k++) {
				if (i == j || i == k || j == k) {
					continue;
				}
				
				if (numbers[i] + numbers[j] + numbers[k] == 2020) {
					std::cout << i << ", " << j << " and " <<  k << '\n';
					std::cout << numbers[i] << " * " << numbers[j] << " * " << numbers[k] << " = " << numbers[i] * numbers[j] * numbers[k] << '\n';
				}
			}
		}
	}
	
	std::cout << "Done!\n";
}
