
//Homework 1#: Guess the run-time output



#include<iostream>
using namespace std;

int main()
{
	cout<<"\n\nGuess the " // (line, line) Guess the output (line) ----- (line)
		<<"output\n---\n";

	cout<<10+20-5<<endl;  //25
	cout<<"14/2"<<"\n";  //14/2
	cout<<17-10<<"\n"; //7
	cout<<"endl";  //(line)
	cout<<"\nPractice makes perfect";  //(line) Practice makes perfect

	//cout<<"The way to get started is to quit talking and begin doing"; // not gonna print

	return 0;

	cout<<"\n\nBye\n\n"; // not gonna print
}


/*
Homework 2#: Write code to print the following
A) A triangle with angel 90 degree
*/

#include<iostream>
using namespace std;

int main()
{
	cout<<"*\n";
	cout<<"* *\n";
	cout<<"* * *\n";
	cout<<"* * * *\n";
	cout<<"* * * * *\n";

	return 0;
}

  //(B)
  #include<iostream>
using namespace std;

int main()
{
	cout<<"        *        \n";
	cout<<"      * * *     \n ";
	cout<<"    * * * * *   \n ";
	cout<<"  * * * * * * * \n ";
	cout<<"* * * * * * * * *\n"l;

	return 0;
}
 //(C)
 #include<iostream>
using namespace std;

int main()
{
	cout<<"        *        "<<endl;
	cout<<"      * * *      "<<endl;
	cout<<"    * * * * *    "<<endl;
	cout<<"  * * * * * * *  "<<endl;
	cout<<"* * * * * * * * *"<<endl;
	cout<<"  * * * * * * *  "<<endl;
	cout<<"    * * * * *    "<<endl;
	cout<<"      * * *      "<<endl;
	cout<<"        *        "<<endl;

	return 0;
}


//(D)
#include<iostream>
using namespace std;



int main()
 {
	cout<<"        1        \n";
	cout<<"      2 3 2     \n ";
	cout<<"    3 4 5 4 3   \n ";
	cout<<"  4 5 6 7 6 5 4 \n ";
	cout<<"5 6 7 8 9 8 7 6 5\n";


	return 0;

}

 // (E)
 #include<iostream>
using namespace std;



int main()
 {
	cout<<"          1        \n";
	cout<<"        1   1      \n ";
	cout<<"      1   2   1   \n ";
	cout<<"    1   3   3   1 \n ";
	cout<<"  1   4   6   4   1\n";
	cout<<"1   5  10   10  5   1\n";


	return 0;

}

// Homework 3#: Find all errors and fix them


#include<stream  //<iostream>
using namespace STD  // std


cout <<"work smart not hard\n"; // not in main


int maIN() {  // main


	cout << "Children must be taught how to think, not what to think\n" //missing ;
	cout << "We worry about what a child will become "tomorrow", yet we forget that he is someone today\n"; // should have used ( "/) instead of ("")
	cout << "Children are not things to be molded"<", but are people to be unfolded\n"; // // should have used ( <<) instead of (<)
	cout << "Each day of our lives we make deposits in the memory banks of our children."<<end; //endl
	cout      << ""It is easier to build strong children than to repair broken men""<<"\n"; // used ("") twice
	cout >> "Children need models rather than critics\n"; // should have used ( <<) instead of (>>)

	out<<"Children have never been very good at listening to their elders, but they have never failed to imitate them"; // (cout) not (out)

	cout < "Children are our most valuable resource\n";// should have used ( <<) instead of (<)




