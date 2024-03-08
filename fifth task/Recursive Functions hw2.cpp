//Homework 12: Is Palindrome

#include <iostream>

using namespace std;

bool isPalindrome(int arr[], int len) {
    for (int i = 0; i < len / 2; ++i) {
        if (arr[i] != arr[len - 1 - i])
            return false;

    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];


    if (isPalindrome(arr, n))
        cout << "YES" << endl;
     else
        cout << "NO" << endl;


    return 0;
}

/*
Homework 14: Trace
 the first method will print the numbers reversed(654321)
 but if we swapped lines 6 & 7 the numbers will print like normal (123456)
*/
