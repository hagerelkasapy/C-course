//Selection Homework 2
//Problem #1: Find Maximum of 10
/*

#include <iostream>

using namespace std;

int main()
{
 int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
 cin>> a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10;

 cout<<max(max(max(max(max(max(max(max(max(a1,a2),a3),a4),a5),a6),a7),a8),a9),a10);

   return 0;
}





#include <iostream>

using namespace std;

int main()
{


   return 0;
}

*/
#include<iostream>
using namespace std;

int main() {
	int cnt, result, num;

	cin>>cnt;

	cin>>result;	// First number
	cnt -= 1;

	// Read  times and maximize
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}

	cout<<result;

	return 0;
}

