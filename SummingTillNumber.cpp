#include <iostream>
using namespace std;
int sum(int n);
int main()
{
    cout << "Enter the number: ";
    int n;
    cin >> n;
    cout << sum(n);
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
