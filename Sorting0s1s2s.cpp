#include <iostream>
using namespace std;
int main()
{
    int array[] = {0, 2, 1, 2, 0};
    int n = sizeof(array) / sizeof(array[0]);
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (array[mid] == 0)
        {
            swap(array[mid], array[low]);
            mid++;
            low++;
        }
        else if (array[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(array[mid], array[high]);
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
