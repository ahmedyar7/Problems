#include <iostream>
using namespace std;
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    cout << "Enter the first element: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the second element: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    int product[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << product[i][j] << "  ";
        }
        cout << "\n\n";
    }
}
