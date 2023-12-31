#include <iostream>
using namespace std;
int majorityElement(int n, int array[]);
int main()
{
    int array[] = {3, 1, 3, 3, 2};
    int n = sizeof(array) / sizeof(array[0]);
    cout << majorityElement(n, array);
}
int majorityElement(int n, int array[])
{
    int count = 0;
    int element = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = array[i];
        }
        if (element == 0)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (element == array[i])
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return element;
    }
    else
    {
        return -1;
    }
}
