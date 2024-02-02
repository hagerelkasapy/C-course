// Homework 1: Guess the output

#include<iostream>
using namespace std;

int main() {

	int a = 10, b = 20, c = 30, d = 40;

	cout << (a + b == c) << "\n";//1
	cout << (a + b + c >= 2 * d) << "\n";//0

	cout << (a > 5 || d < 30) << "\n";//1
	cout << (a > 5 && d < 30) << "\n";//0
	cout << (a <= b && b <= c) << "\n";//1

	cout << (a > 5 && d < 30 || c - b == 10) << "\n";//1
	cout << (a <= b && b <= c && c <= d) << "\n";//1

	cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n";//1
	cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n";//0

	cout << ( a == 10 || b != 20  && c != 30 || d != 40) << "\n";//1
	cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n";//0

	return 0;
}


//Homework 2: Create logic!

#include<iostream>
using namespace std;

int main() {
	int nb, ng, nt;
	cin >> nb >> ng >> nt;

	cout << (nb > 25) << "\n";

	cout << (ng <= 30) << "\n";

	cout << (nb > 20 && nt > 2 || ng > 30 && nt > 4) << "\n";

	cout << (nb < 60 || ng < 70) << "\n";

	cout << (  !(nb >= 60) && !(ng >= 70) ) << "\n";

	cout << (nb == ng + 10) << "\n";

	cout << (nb - ng > 10 || nt > 5) << "\n";

	cout << (nb == ng + 10 || ng == nb + 15) << "\n";

	return 0;
}

/*Homework 3: Simplify expressions

●T && T && F && T    //f
● T && T && F && T || T && T  //t
● T && T && T && T || T && (T || F)  //t
● T && T && T || T && (F || (T && (T && T)))   //t
● T && T || T && F && T || T && T && F || (T && (T || F))   //f
● T && T || T && F && T || (T && T && F || (T && (T || F)))  //t
● (T && T || T && F && T || T) && T && F || (T && (T || F))   //f
● T && T || T && (F && T || T && T) && F || (T && (T || F))   //t
*/
