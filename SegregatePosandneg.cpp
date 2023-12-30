#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, -1, 2, -2, 3, -3, 4, -5};
    int n = sizeof(array) / sizeof(array[0]);
    int array2[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] <= 0)
        {
            array2[c++] = array[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] >= 0)
        {
            array2[c++] = array[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        array[i] = array2[i];
        cout << array[i] << " ";
    }
}
