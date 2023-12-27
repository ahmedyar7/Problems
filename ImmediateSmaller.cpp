#include <iostream>
using namespace std;
int main()
{
    int array[] = {4, 2, 1, 5, 3};
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            array[i] = -1;
        }
        else if (array[i + 1] < array[i])
        {
            array[i] = array[i + 1];
        }
        else
        {
            array[i] = -1;
        }
        // cout << array[i] << " ";
    }
}
