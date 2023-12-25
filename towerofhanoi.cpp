#include <iostream>
using namespace std;
void towerOfHanoi(int n, char src, char aux, char dest);
int main()
{
    towerOfHanoi(4, 'A', 'B', 'C');
}
void towerOfHanoi(int n, char src, char aux, char dest)
{
    if (n == 1)
    {
        cout << "Move from " << src << " to " << dest << endl;
        return;
    }
    towerOfHanoi(n - 1, src, dest, aux);
    cout << "Move from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, aux, src, dest);
}
