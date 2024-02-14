//Problem #1: Find the 3 minimum values


#include<iostream>
using namespace std;

int main()
{
    int n, numbers[200];

    cin>>n;
    for (int i = 0; i < n; ++i)
        cin >> numbers[i];

    int mini = 0;
    for (int i = 1; i < n; ++i)
        if (numbers[mini] > numbers[i])
            mini = i;


    int min1 = numbers[mini];
    numbers[mini] = 1000;
    mini  = 0;

    for (int i = 1; i < n; ++i)
        if (numbers[mini] > numbers[i])
            mini = i;

    int min2 = numbers[mini];
    numbers[mini] = 1000;
    mini  = 0;

    for (int i = 1; i < n; ++i)
        if (numbers[mini] > numbers[i])
            mini = i;


    int min3 = numbers[mini];
    cout << min1 << " " << min2<< " " <<min3;
    return 0;
}

