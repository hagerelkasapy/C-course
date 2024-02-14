//Problem #6: Sorting numbers

#include <iostream>

using namespace std;

int main()
{

    int N, numbers[900];
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> numbers[i];

    for (int i = 0; i < N - 1; ++i)
    {
        for (int j = 0; j < N - i - 1; ++j)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "Sorted list of numbers: ";
    for (int i = 0; i < N; ++i)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
