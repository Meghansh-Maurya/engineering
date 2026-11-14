#include <iostream>
using namespace std;

int multiplyDigits(int n)
{
    if (n == 0)
        return 1;

    int remainder = n % 10;

    return remainder * multiplyDigits(n / 10);
}

int main()
{
    int n;

    cin >> n;

    cout << multiplyDigits(n);

    return 0;
}