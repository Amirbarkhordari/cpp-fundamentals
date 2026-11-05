#include <iostream>
using namespace std;

int main()
{
    int sum;

    cout << "Perfect numbers from 1 to 1000:\n";

    for (int number = 1; number <= 1000; ++number) {
        sum = 0;

        for (int divisor = 1; divisor < number; ++divisor) {
            if (number % divisor == 0)
                sum = sum + divisor;
        }

        if (sum == number)
            cout << number << '\n';
    }

    return 0;
}
