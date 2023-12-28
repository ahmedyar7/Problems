#include <iostream>
using namespace std;
int main()
{
    int array[] = {3, 5, 0, 0, 4};
    int n = sizeof(array) / sizeof(array[0]);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
        {
            array[count++] = array[i];
        }
    }
    while (count < n)
    {
        array[count++] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}
