//While Loops Homework 2
 // Homework 5: Print diamond


#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	int row = 1;
	while (row <= N) {
		int stars_count = 1;

		while (stars_count <= N-row) {
			cout << ' ';
			++stars_count;
		}

		stars_count = 1;
		while (stars_count <= 2*row-1) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		++row;
	}


	row = N;
	while (row >= 1) {
		int stars_count = 1;

		while (stars_count <= N-row) {
			cout << ' ';
			++stars_count;
		}

		stars_count = 1;

		while (stars_count <= 2*row-1) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		--row;
	}
	return 0;
}


 //Problem #2: Special multiples 1

 #include<iostream>
using namespace std;

int main() {
	int N, result = 0;

	cin >> N;

	int cnt = 0;

	while (cnt <= N)
	{
		if (cnt % 8 == 0 || cnt % 3 == 0 && cnt % 4 == 0)
			cout<<cnt<<" ";

		cnt ++;
	}




	return 0;
}



//Problem #3: Special multiples 2
#include<iostream>
using namespace std;

int main() {
	int N, result = 0;

	cin >> N;

	int cnt = 0;
	int current_number = 0;

	while (cnt < N) {
		if (current_number % 3 == 0 && current_number % 4 != 0) {
			cout << current_number << " ";
			cnt++;
		}
		current_number++;
	}
	return 0;
}



//Problem #4: Minimum of values

#include<iostream>
using namespace std;

int main() {
	int T;

	cin >> T;

	while (T > 0) {
		int N;
		cin >> N;

		int pos = 0;
		int result;

		while (pos < N) {
			int value;
			cin >> value;

			if (pos == 0)
				result = value;
			else if (result > value)
				result = value;

			pos++;
		}
		cout<<result<<"\n";

		--T;
	}

	return 0;
}

