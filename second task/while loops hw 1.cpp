//While Loops Homework 1

//Problem #1: Print Range

#include <iostream>

using namespace std;

int main()
{
  int start,end;
  cout<< "please enter your range\n";
  cin>> start>>end;

  while (start<= end)
  {

    cout << start << endl;
    start++;
  }
    return 0;
}




//Problem #2: Line Of Characters
#include <iostream>

using namespace std;

int main()
{
    int N;
    char c;
    cout<< "please enter your numbers\n";
    cin>>N>>c;

     while (N >0 )
     {
          cout<<c;
          N -= 1;

     }
     return 0;
}


//Problem #3: Print left angled triangle

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
 int num=1;
    while (num<=n){
   int stars=1;
   while(stars<=num)
   {
       cout<< '*';
       ++stars;
   }
   cout<<"\n";
   num++;
    }
 return 0;
}




//Problem #4: Print face down left angled triangle


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
 int num=n;
    while (num>0){
   int stars=1;
   while(stars<num)
   {
       cout<< '*';
       ++stars;
   }
   cout<<"\n";
   num--;
    }
 return 0;
}


//Problem #5: Special Average


#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	double even_sum = 0, odd_sum = 0;
	int even_count = 0, odd_count = 0;

	int cnt = 1;
	while (cnt <= N) {
		double value;
		cin >> value;

		if (cnt % 2 == 0)
			even_sum += value, even_count++;
		else
			odd_sum += value, odd_count++;

		cnt++;
	}

	cout <<odd_sum / odd_count << " " << even_sum / even_count << "\n";

	return 0;
}

