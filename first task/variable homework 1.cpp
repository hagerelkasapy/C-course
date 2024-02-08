 /*Variables Homework 1
 Problem #1: Math operations
*/
 #include <iostream>

using namespace std;

int main()
{

 int num;
 int num1;
  cin>>num;
  cin>>num1;


  cout <<"n1+n2="<<num+num1<< "\n";
  cout << "n1-n2="<< num-num1<< "\n";
  cout << "n1*n2="<< num*num1<< "\n";
  cout << "n1/n2="<< num/num1<< "\n";
  return 0;
}

/*Problem #2: Students grades*/

#include <iostream>
using namespace std;

int main()
{
    string name1;
    int num1;


    cout<< "what is student1 name? \n";
    cin>> name1;
    cout<< " his id\n";
    cin>> num1;

     double num ;
    cout<< "his math grade\n";
    cin>> num;

    string name2;
    int num2;
    double num3;
        cout<< "what is student2 name? \n";
            cin>> name2;

         cout<< " his id\n";
        cin>> num2;
          cout<< "his math grade\n";
         cin>> num3;
         cout<< "students grades in math are: \n";
         cout<<  name1<< "  (with id)  " <<num1  <<"   got grade:  "<<num  <<"\n";
         cout<<  name2<< "  (with id)  " << num2  <<"  got grade:  "<<num3  <<"\n";
        cout<<"average grade is="<< (num+num3)/2;




    return 0;
}

//Problem #3: Even and Odd sum

#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    int num8;

    num1=11;
    num2=2;
    num3=7;
    num4=9;
    num5=12;
    num6=(-8);
    num7=3;
    num8=(-1);

    cout<<num1+num3+num5+num7<< "  the odd nums\n";
    cout<<num2+num4+num6+num8<<"   the even nums\n";






    return 0;
}
