#include <iostream>
using namespace std;
int fib(int n);
int main()
{
    cout << "Enter the number ";
    int n;
    cin >> n;
    cout << "\nFibonacci Sequence: \n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << fib(i);
    }
}
int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return (fib(n - 1) + fib(n - 2));
}
