#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int k = 3;
    for (int i = 0; i < n; i = i + k)
    {
        int start = i;
        int end = min(i + k - 1, n - 1);
        while (start <= end)
        {
            int swap = array[start];
            array[start] = array[end];
            array[end] = swap;
            start++;
            end--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
