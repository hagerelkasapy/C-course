//Problem #1: Compressing

#include <iostream>

using namespace std;


int main()
{
    string x;
    cout << "Enter a string of letters: \n";
    cin >> x;

    char currentChar = '\0';
    int count = 0;

    for (char ch : x)
    {
        if (ch == currentChar)
        {
            count++;
        }
        else
        {
            if (currentChar != '\0')
            {

                cout << currentChar;
                if (count > 1)
                {
                    cout << count;
                }
                cout << "-";
            }

            currentChar = ch;
            count = 1;
        }
    }

    cout << currentChar;
    if (count > 1)
    {
        cout << count;
    }

    return 0;
}

//Problem #3: Add 5555

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string input;
    cout << "Enter a long string of digits: \n";
    cin >> input;

    int add = 0;

    string resultString;

    for (int i = input.length() - 1; i >= 0; --i)
    {
        int digit = input[i] - '0';

        int sum = digit + 5555 + add;

        add = sum / 10;

        resultString = to_string(sum % 10) + resultString;
    }

    if (add > 0)
    {
        resultString = to_string(add) + resultString;
    }

    cout << "Result: " << resultString << endl;

    return 0;
}
