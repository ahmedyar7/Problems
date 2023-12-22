#include <iostream>
using namespace std;
int rotate(int n, int array[]);
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array) / sizeof(array[0]);
    rotate(n, array);
}
int rotate(int n, int array[])
{
    int d = 3;
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + d) % n] = array[i];
    }
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
}
