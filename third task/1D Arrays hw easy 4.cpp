//Problem #4: Is Palindrome?

#include <iostream>
using namespace std;

int main() {

	int a[999];

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> a[i];

	for (int i = 0; i < N / 2; i++) {
		if (a[i] != a[N - 1 - i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
