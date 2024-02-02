/*Operators Homework 1
Homework 1: Guess Program Output.
*/

#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 1;

	cout<<a++<<"\n"; //0
	cout<<++a<<"\n"; //2
	a += 2*b+1;
	b = ++a * 2;
	cout<<a<<" "<<b<<"\n"; //a=6 b=12

	b = a;
	a = 12 + a / 3 / 2 - 2 * 2;
	cout<<a<<"\n";//9

	a = b;
	a = ((12 + a) / 3 / 2 - 2) * 2;
	cout<<a<<"\n";//2

	return 0;
}


//Homework 2: Guess Program Output
#include<iostream>
using namespace std;

int main() {

	int a = 1, b = 1, c;

	cout<<(c = a+b, a = b, b = c,//2
		   c = a+b, a = b, b = c,//2
		   c = a+b, a = b, b = c,//2
		   c = a+b, a = b, b = c) <<endl;//2
//total 8
	return 0;
}


//Homework 3: Guess Program Output

#include<iostream>
using namespace std;

int main() {

	int a = 210;

	a /= 2;
	cout<<a<<"\n";//105

	cout<<(a /= 3)<<"\n";//35
	cout<<(a /= 5)<<"\n";//7
	cout<<(a /= 7)<<"\n";//1

	cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n";//1

	a = 10;
	cout<<a++ + 10<<"\n";//20
	cout<<++a + 10<<"\n";//22
	cout<<a-- + 10<<"\n";//22
	cout<<--a + 10<<"\n";//20

	int b = 20;
	cout<<a++ + ++b<<"\n";	// 31

	cout<<a<<"\n";//11
	++a+=10;	// 22
	cout<<a<<"\n";



	return 0;
}


