//Problem #3: Unique Numbers of ordered list

#include <iostream>
using namespace std;

int main()
{
    int N,numbers[1000];

    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> numbers[i];

    cout << "Unique list of numbers: " << numbers[0] << " ";
    for (int i = 1; i < N; ++i)
    {
        if (numbers[i] != numbers[i - 1])
        {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}
