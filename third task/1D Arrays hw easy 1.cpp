
//Problem #1: Is increasing array?


#include <iostream>

using namespace std;

int main()
{
   int n, numbers[200];
   cin>> n;

   for (int i=0; i < n; ++i)
   cin>> numbers[i];

   bool incr = 1;


for (int i = 1; i < n; i++) {
		if (numbers[i] < numbers[i - 1]) {
			incr = 0;
			break;
		}
	}
	if (incr) {
		cout << "YES\n";}
	else
	{
		cout << "NO\n";
	}

    return 0;
}

