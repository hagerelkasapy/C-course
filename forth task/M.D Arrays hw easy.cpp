//Problem #1: Smaller row?

#include <iostream>

using namespace std;

int main() {
    int N, M;
        cout << "Enter the number of rows (N) and columns (M): ";

   cin >> N >> M;

    int matrix[100][100];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> matrix[i][j];

    int Q;
    cin >> Q;

    while (Q--) {
        int row1, row2;
       cin >> row1 >> row2;

        bool is_Smaller_For_All = true;
        for (int x = 0; is_Smaller_For_All && x < M; ++x)
           is_Smaller_For_All = matrix[row1 - 1][x] < matrix[row2 - 1][x];

        cout << (is_Smaller_For_All ? "YES" : "NO") << endl;
    }

    return 0;
}

//Problem #2: Triangular matrix

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the size of the square matrix (N): \n";
    cin >> N;

    int matrix[100][100];

    cout << "Enter the square matrix elements row by row:\n";
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> matrix[i][j];

    int lower_Triangle_Sum = 0, upper_Triangle_Sum = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i <= j)
                upper_Triangle_Sum += matrix[i][j];
            if (i >= j)
                lower_Triangle_Sum += matrix[i][j];
        }
    }

    cout << "Sum of lower triangle: " << lower_Triangle_Sum << endl;
    cout << "Sum of upper triangle: " << upper_Triangle_Sum << endl;

    return 0;
}

//Problem #3: Transpose
#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout << "Enter the number of rows (N) and columns (M): \n";
    cin >> N >> M;

    int matrix[100][100];
    int transpose[100][100];

   cout << "Enter the matrix elements row by row:\n";
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> matrix[i][j];

    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j)
            transpose[i][j] = matrix[j][i];

   cout << "Original Matrix:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j)
            cout << matrix[i][j] << " ";
    }

    cout << "\nTranspose Matrix:\n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j)
           cout << transpose[i][j] << " ";
    }

    return 0;
}
