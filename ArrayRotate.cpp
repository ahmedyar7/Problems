#include <iostream>
using namespace std;
int rotate(int n, int array[]);
int main()
{
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(array) / sizeof(array[0]);
    rotate(n, array);
}
int rotate(int n, int array[])
{
    int d = 3;
    int k = 0;
    int temp[n];
    for (int i = d; i < n; i++)
    {
        temp[k] = array[i];
        k++;
    }
    for (int i = 0; i < d; i++)
    {
        temp[k] = array[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        array[i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
