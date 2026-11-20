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

int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    const int size = 10;
    int numbers[size];
    int target;
    int index;

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

    cout << "Enter a number to search: ";
    cin >> target;

    index = binarySearch(numbers, size, target);

    cout << index << '\n';

    return 0;
}
