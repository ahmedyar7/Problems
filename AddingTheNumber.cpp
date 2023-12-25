#include <iostream>
using namespace std;
int sum(int n);
int main()
{
    cout << "Enter the number: ";
    int n;
    cin >> n;
    cout << "The sum: " << sum(n);
}
int sum(int n)
{
    if (n < 10)
    {
        return n;
    }
    int first = n % 10;
    return first + sum(n / 10);
}
