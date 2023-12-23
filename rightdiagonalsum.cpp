#include <iostream>
using namespace std;
int main()
{
    int array[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];
            cout << array[i][j] << "  ";
        }
        cout << "\n\n";
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i + j) == 3 - 1)
            {
                sum += array[i][j];
            }
        }
    }
    cout << sum << endl;
}
