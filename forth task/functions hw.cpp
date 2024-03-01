//Homework 1: Max of 6 numbers

#include <iostream>
using namespace std;

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum of three numbers
int max(int a, int b, int c) {
    return max(max(a, b), c);
}

// Function to find the maximum of four numbers
int max(int a, int b, int c, int d) {
    return max(max(a, b, c), d);
}

// Function to find the maximum of five numbers
int max(int a, int b, int c, int d, int e) {
    return max(max(a, b, c, d), e);
}

// Function to find the maximum of six numbers
int max(int a, int b, int c, int d, int e, int f) {
    return max(max(a, b, c, d, e), f);
}

int main() {
    int num1, num2, num3, num4, num5, num6;
    cout << "Enter six numbers: \n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;

    int maximum = max(num1, num2, num3, num4, num5, num6);
    cout << "Maximum number is: " << maximum << endl;

    return 0;
}





//Homework 2: Reverse a string


#include <iostream>
using namespace std;

  string reverse_str(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
  string input;
    cout << "Enter a string: \n";
    cin >> input;

   string reversed = reverse_str(input);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}


//Homework 3: Calculator


#include <iostream>
#include <limits>
using namespace std;

void readTwoNumbers(double& num1, double& num2) {
    cout << "Enter two numbers:\n";
   cin >> num1 >> num2;
}

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Cannot divide by zero.\n";
        return numeric_limits<double>::quiet_NaN();
    }
}

int Menu() {
    int choice;
    cout << "\nMenu:\n";
   cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. End Program\n";
    cout << "Enter your choice (1-5): ";
   cin >> choice;

    if (choice < 1 || choice > 5) {
        cout << "Error: Invalid choice. Please enter a number between 1 and 5.\n";
        return Menu();
    }

    return choice;
}

int main() {
    int Count = 0;

    while (true) {
        int choice = Menu();
        double num1, num2, result;

        switch (choice) {
            case 1:
                readTwoNumbers(num1, num2);
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 2:
                readTwoNumbers(num1, num2);
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 3:
                readTwoNumbers(num1, num2);
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 4:
                readTwoNumbers(num1, num2);
                result = divide(num1, num2);
                    cout << "Result: " << result << endl;


            case 5:
                cout << "Program ended. Total operations: " << Count << endl;
                return 0;

            default:
                cout << "Error: Invalid choice.\n";
        }

        ++Count;
    }

    return 0;
}


//Homework 4: Is Palindrome Array

#include <iostream>
using namespace std;

bool is_Palindrome(const int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        if (arr[i] != arr[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cout << "Enter the size of the array (N): \n";
   cin >> N;

    int array[100];

   cout << "Enter " << N << " integers for the array:\n";
    for (int i = 0; i < N; ++i) {
       cin >> array[i];
    }

    if (is_Palindrome(array, N)) {
        cout << "The array is a palindrome.\n";
    } else {
       cout << "The array is not a palindrome.\n";
    }

    return 0;
}

