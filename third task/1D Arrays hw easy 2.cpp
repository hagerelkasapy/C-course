
// Problem #2: Replace MinMax


#include<iostream>
using namespace std;

int main() {

	const int N = 199;	// < 200 = 199 elements

	int n, numbers[N], min1 = 10000, max1 = -1;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
		if (numbers[i] < min1) {
			min1 = numbers[i];
		}
		if (numbers[i] > max1) {
			max1 = numbers[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (numbers[i] == min1)
			numbers[i] = max1;
		else if (numbers[i] == max1)
			numbers[i] = min1;
	}

	for (int i = 0; i < n; i++) {
		if (i)
			cout << " ";
		cout << numbers[i];
	}
	return 0;
}



