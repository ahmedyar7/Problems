#include <iostream>
using namespace std;

class Matrix
{
private:
    int array1[3][3];
    int array2[3][3];

public:
    Matrix()
    {
        cout << "Enter the elements: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> array1[i][j];
            }
        }
        cout << "Enter the elements: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> array2[i][j];
            }
        }
    }
    // Friend Function:
    friend void Display(const Matrix &o);
    friend void multiply(const Matrix &o);
    friend void adds(const Matrix &o);
    friend void subtract(const Matrix &o);
    friend void divide(const Matrix &o);
};

void Display(const Matrix &o)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << o.array1[i][j] << "  ";
        }
        cout << endl
             << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << o.array1[i][j] << "  ";
        }
        cout << endl
             << endl;
    }
}

void multiply(const Matrix &o)
{
    int product[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                product[i][j] += o.array1[i][k] * o.array2[k][j];
            }
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << product[i][j] << "  ";
        }
        cout << endl
             << endl;
    }
}

void adds(const Matrix &o)
{
    int add[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add[i][j] = 0;
            add[i][j] += o.array1[i][j] + o.array2[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << "\n\n";
    }
}

void subtract(const Matrix &o)
{
    int diff[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            diff[i][j] = 0;
            diff[i][j] += o.array1[i][j] - o.array2[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << diff[i][j] << "   ";
        }
        cout << "\n\n";
    }
}

void divide(const Matrix &o)
{
    int divide[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            divide[i][j] = 0;
            divide[i][j] += o.array1[i][j] / o.array2[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << divide[i][j] << "  ";
        }
        cout << "\n\n";
    }
}

int main()
{
    class Matrix object;
    Display(object);
    cout << "Multiplication: \n";
    multiply(object);
    cout << "Addition: \n";
    adds(object);
    cout << "Subtraction: \n";
    subtract(object);
    cout << "Division: \n";
    divide(object);
}
