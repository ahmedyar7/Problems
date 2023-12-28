#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            array[i] *= -1;
        }
    }
    sort(array, array + n);
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            array[i] *= -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
