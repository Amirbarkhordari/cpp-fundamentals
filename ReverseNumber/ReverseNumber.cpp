#include <iostream>
using namespace std;

int main()
{
    int n;
    int digit;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;
        cout << digit;
        n = n / 10;
    }

    cout << '\n';

    return 0;
}
