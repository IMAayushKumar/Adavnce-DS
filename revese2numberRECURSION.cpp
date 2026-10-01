#include <iostream>
using namespace std;
int reverseNumber(int n, int rev = 0)
{
    if (n == 0)
    {
        return rev;
    }

    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    bool isNegative = (n < 0);
    int numToReverse = isNegative ? -n : n;

    int reversed = reverseNumber(numToReverse);

    if (isNegative)
    {
        reversed = -reversed;
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}