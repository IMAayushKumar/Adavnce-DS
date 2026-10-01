#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
    }
    else
    {
        cout << "The " << n << "-th Fibonacci number is: " << fibonacci(n) << endl;
        cout << "\nFibonacci Series up to " << n << " terms:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }

    return 0;
}