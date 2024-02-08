//For Loops Homework

//Homework 1: Printing X

#include<iostream>
using namespace std;

int main() {
	int n;

	cin>>n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if(i == j || n-i-1 == j)
				cout<<'*';
			else
				cout<<" ";
		}
		cout<<"\n";
	}

	return 0;
}

//Homework 2: Find Special Pairs

#include<iostream>
using namespace std;

int main() {
	int count = 0;

	for (int x = 50; x <= 300; ++x) {
		for (int y = 70; y <= 400; ++y) {
			if (x < y && ((x + y) % 7 == 0)) {
				++count;
			}
		}
	}
	cout<<count<<"\n";

	return 0;
}


