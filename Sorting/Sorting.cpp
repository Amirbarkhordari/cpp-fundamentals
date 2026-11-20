#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    const int size = 10;
    int numbers[size];

    cout << "Enter 10 numbers:\n";

    for (int i = 0; i < size; ++i)
        cin >> numbers[i];

    selectionSort(numbers, size);

    cout << "Sorted numbers:\n";
    for (int i = 0; i < size; ++i) {
        if (i > 0)
            cout << ' ';
        cout << numbers[i];
    }
    cout << '\n';

    return 0;
}
