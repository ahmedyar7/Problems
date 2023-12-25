#include <iostream>
using namespace std;
int power(int n, int p);
int main()
{
    cout << "Enter the number: ";
    int n;
    cin >> n;
    cout << "Enter the power: ";
    int p;
    cin >> p;
    cout << "The result: " << power(n, p);
}
int power(int n, int p)
{
    if (n == 0)
    {
        return 0;
    }
    if (p == 0)
    {
        return 1;
    }
    return n * power(n, p - 1);
}
