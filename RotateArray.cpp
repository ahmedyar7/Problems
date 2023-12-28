#include <iostream>
using namespace std;
void reverse(int array[], int start, int end);
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array) / sizeof(array[0]);
    int d = 3;
    d = d % n;
    reverse(array, 0, d - 1);
    reverse(array, d, n - 1);
    reverse(array, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
void reverse(int array[], int start, int end)
{
    while (start < end)
    {
        int swap = array[start];
        array[start] = array[end];
        array[end] = swap;
        start++;
        end--;
    }
}
