//Problem #3: Find most frequent number



#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	const int max1 = 270 + 500 + 1;
	int repeat[max1] = { 0 };

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;

		value += 500;
		repeat[value]++;
	}

	int max_pos = 0;
	for (int i = 0; i < max1; i++) {
		if (repeat[max_pos] < repeat[i])
			max_pos = i;
	}
	cout << max_pos - 500 << " has repeated " << repeat[max_pos] << " times ";
}
