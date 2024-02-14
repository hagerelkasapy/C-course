//Problem #5: Smallest pair

#include<iostream>
using namespace std;

int main() {
	const int N = 200;

	int n, a[N];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];


	int min1;
	bool first_time = true;

	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			int temp = a[i] + a[j] + j - i;
			if (first_time || temp < min1) {
				min1 = temp;
				first_time = false;
			}
		}
	}
	cout << min1 << endl;
	return 0;
}

