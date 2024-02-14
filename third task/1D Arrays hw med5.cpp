//Problem #5: Unique Numbers of unordered list

#include <iostream>
using namespace std;

int main() {
    int N,numbers[900];


   cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> numbers[i];

    for (int i = 0; i < N; ++i) {
        bool is_Unique = true;
        for (int j = 0; j < i; ++j) {
            if (numbers[j] == numbers[i]) {
                is_Unique = false;
                break;
            }
        }

        if (is_Unique) {
           cout << numbers[i] << " ";
        }
    }

    return 0;
}
