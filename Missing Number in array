#include <iostream>
using namespace std;
int missingNumber(int n, int array[]);
int main()
{
    int array[] = {1, 2, 3, 5};
    int n = sizeof(array) / sizeof(array[0]);
    cout << missingNumber(n, array);
}
int missingNumber(int n, int array[])
{
    int total = 1;
    int i;
    for (int i = 2; i < (n + 1); i++)
    {
        total += i;
        total -= array[i - 2];
    }
    return total;
}
