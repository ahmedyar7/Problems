#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(array) / sizeof(array[0]);
    sort(array, array + n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            ans.push_back(array[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            ans.push_back(array[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        array[i] = ans[i];
        cout << array[i] << " ";
    }
}
