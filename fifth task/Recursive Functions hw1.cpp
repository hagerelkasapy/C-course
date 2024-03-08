//Homework 1: Length of 3n+1
#include <iostream>

using namespace std;


int length_3n_plus_1(int n)
{
    int length = 1;

    for (; n != 1; length++)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;

    }

    return length;
}

int main()
{
    cout <<length_3n_plus_1(6)<< endl;

    return 0;
}






//Homework 2: Power function

#include <iostream>

using namespace std;

int my_pow(int value, int p = 2)
{

    if ( p == 0)
        return 1;

    int result;
    for (int i; i < p; ++i)
        result *= value;
    return result;

}


int main()
{

    cout <<my_pow(7,3)<< endl;
    cout <<my_pow(5,0)<< endl;


    return 0;
}






//Homework 3: Array maximum

#include <iostream>

using namespace std;

int arr_max(int arr[], int len)
{
    if (len == 1)
        return arr[0];

    int sub_result = arr_max(arr, len - 1);
    return max(sub_result, arr[len - 1]);
}


int main()
{
    int arr[] = { 1, 8, 2, 10, 3 };

    cout << arr_max(arr, 5);


    return 0;

}






//Homework 4: Array sum

#include <iostream>

using namespace std;
int sum(int arr[], int len, int index = 0)
{
    if (index == len)
        return 0;

    return arr[index] + sum(arr, len, index + 1);
}

int main()
{
    int arr[] = {1, 8, 2, 10, 3};
    int length= sizeof (arr)/ sizeof(arr[0]);
    cout<< sum(arr, length)<< endl;


    return 0;

}






//Homework 6: Array Increment

#include <iostream>
using namespace std;

void array1(int arr[], int len)
{
    for (int i = 0; i < len; ++i)
        arr[i] += i;
}

int main()
{
    int array[] = {1, 8, 2, 10, 3};
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; ++i)
        cout << array[i] << " ";

    cout << endl;

    array1(array, length);

    for (int i = 0; i < length; ++i)
        cout << array[i] << " ";


    return 0;
}







//Homework 7: Array Accumulation

#include <iostream>
using namespace std;

void accumulate_arr(int arr[], int len, int index = 0, int sum = 0)
{
    if (index == len)
        return;

    arr[index] = sum + arr[index];
    accumulate_arr(arr, len, index + 1, arr[index]);
}

int main()
{
    int array[] = {1, 8, 2, 10, 3};
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; ++i)
        cout << array[i]<< " ";

    cout << endl;

    accumulate_arr(array, length);

    for (int i = 0; i < length; ++i)
        cout << array[i] << " ";


    return 0;
}




