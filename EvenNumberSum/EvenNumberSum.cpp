#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Even numbers are:\n";

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            if (sum > 0)
                cout << " + ";
            cout << i;
            sum = sum + i;
        }
    }

    cout << "\nSum = " << sum << '\n';

    return 0;
}
