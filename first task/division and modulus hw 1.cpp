/*Division and Modulus Homework 1

Problem #1: Averages
*/

#include <iostream>

using namespace std;

int main()
{
double a;
double b;
double c;
double d;
double e;

cin>>a>>b>>c>>d>>e;

cout<< "average="<<(a+b+c+d+e)/2<<"\n";
cout<< (a+b+c)/(d+e)<<"\n";
cout<< ((a+b+c)/2)/((d+e)/2)<<"\n";




    return 0;
}


// Problem #2: Fractional Part

#include <iostream>

using namespace std;

int main()
{

 double a;
  double b;
  int num;
 cin>>a>>b;
  num= a/b;
  cout<< (a/b)-num;
  return 0;
}

//Problem #3: Our remainder
#include<iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	int result = a - (a / b) * b;

	cout << " " << result << "\n";

	return 0;
}



