#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int marks[3];

public:
    // CONSTRUCTOR:
    Student()
    {
        cout << "Enter the Name: ";
        getline(cin, name);
        name = name;
        cout << "Enter the Marks: " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter the Marks" << i + 1 << " : ";
            cin >> marks[i];
        }
    }
    // METHODS:
    void average()
    {
        int total = 0;
        for (int i = 0; i < 3; i++)
        {
            total += marks[i];
        }
        int average = total / 3;
        cout << endl;
        cout << "Average:  " << average << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "The Marks: " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << " ";
        }
    }

    void sort()
    {
        for (int i = 0; i < 3 - 1; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (marks[j] < marks[i])
                {
                    int temp = marks[j];
                    marks[j] = marks[i];
                    marks[i] = temp;
                }
            }
        }
        cout << "After Sorting\n";
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << " ";
        }
    }
};

int main()
{
    Student s;
    s.display();
    s.sort();
    s.average();
}
