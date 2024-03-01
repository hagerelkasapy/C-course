//Homework 1: Is Prefix?

#include <iostream>

using namespace std;

int main()
{

   string str1, str2;
    cout << "Enter the first string: \n";
   cin >> str1;
   cout << "Enter the second string: \n";
    cin >> str2;

    bool isPrefix = true;
    for (size_t i = 0; i < str2.length(); ++i) {
        if (str2[i] != str1[i]) {
            isPrefix = false;
            break;
        }
    }

    if (isPrefix) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}



//Homework 2: Is Suffix?


#include<iostream>
using namespace std;

string input,str;

int main()
{
    cin >> input >> str;
    bool is_suffix=1;
    int n=str.size();

    int j=0;
    for (int i=input.size()-n;i<input.size();i++)
    {
        if (input[i]==str[j])
        {
            j++;
        }
        else if (input[i]!=str[j])
        {
            is_suffix=0;
            break;
        }
    }
    if (is_suffix)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}


//Homework 3: Is Substring?

#include<iostream>
using namespace std;

string input,str;

int main()
{
    cin >> input >> str;
    bool is_substring=0;


    int j=0;
    for (int i=0;i<input.size();i++)
    {
        if (input[i]==str[j])
        {
            j++;
            if (j==str.size())
            {
                is_substring=1;
                break;
            }
        }
        else
        {

           j=0;
        }
    }


    if (is_substring)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}


//Homework 4: Is Subsequence?

#include<iostream>
using namespace std;

string input,str;

int main()
{
    cin >> input >> str;

    int j=0;

    for (int i=0;i<input.size();i++)
    {
        if (input[i]==str[j])
        {
            j++;
            if (j==str.size())break;
        }
    }


    if (j==str.size())
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}


//Homework 6: Grouping


#include <iostream>
using namespace std;

int main() {
   string input;
    cout << "Enter a string: ";
    cin >> input;

    char Char1 = '\0';
    for (char ch : input) {
        if (ch == Char1) {
            cout << ch;
        } else {
            if (Char1 != '\0') {
                cout << endl;
            }
            cout << ch;
           Char1 = ch;
        }
    }

    return 0;
}
