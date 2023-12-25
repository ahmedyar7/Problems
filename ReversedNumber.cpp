#include <iostream>
using namespace std;
void reverse(int n);
int main()
{
    cout << "Enter the number: ";
    int n;
    cin >> n;
    cout << "The reversed: ";
    reverse(n);
}
void reverse(int n)
{
    if (n < 10)
    {
        cout << n;
        return;
    }
    cout << n % 10;
    reverse(n / 10);
}
