#include <iostream>
using namespace std;

int sumDigits(int n)
{
    if (n == 0)
        return 0;

    int remainder = n % 10;

    return remainder + sumDigits(n / 10);
}

int main()
{
    int n;

    cin >> n;

    cout << sumDigits(n);

    return 0;
}