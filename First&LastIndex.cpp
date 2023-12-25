#include <iostream>
using namespace std;
int first(int n, int array[], int key, int i);
int last(int n, int array[], int key, int i);
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 3, 2};
    int n = sizeof(array) / sizeof(array[0]);
    int i = 0;
    int key = 3;
    cout << first(n, array, key, i) << " " << last(n, array, key, i);
}
int first(int n, int array[], int key, int i)
{
    if (i == n)
    {
        return -1;
    }
    if (array[i] == key)
    {
        return i;
    }
    else
    {
        return first(n, array, key, i + 1);
    }
}
int last(int n, int array[], int key, int i)
{
    if (i == n)
    {
        return -1;
    }
    int rest = last(n, array, key, i + 1);
    if (rest != -1)
    {
        return rest;
    }
    if (array[i] == key)
    {
        return i;
    }
    return -1;
}
