/*Division and Modulus Homework 2
Problem #1: Is even?
*/

#include<iostream>
using namespace std;

int main() {

	int num;
	cin >> num;

	// Is even using %2
	bool is_even1 = (num % 2 == 0);

	// is even using /2
	double by2 = (double) num / 2.0;
	by2 = by2 - (int) by2;

	// is even using %10
	int last_digit = num % 10;
	bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;

	return 0;
}




//Problem #2: Last 3 digits sum
#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int n1 = n % 10;
	n /= 10;

	int n2 = n % 10;
	n /= 10;

	int n3 = n % 10;
	n /= 10;

	cout << n1 + n2 + n3 << "\n";

	return 0;
}



//Problem #3: 4th digits from the end
#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	cout << (n / 1000) % 10 << "\n";

	return 0;
}



