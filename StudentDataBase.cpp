#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm> // for sorting
using namespace std;

const int MAX_STUDENTS = 100;

struct Student
{
    int id;
    string name;
    int marks[MAX_STUDENTS];
    double average; // to store the average marks
};
//   Funciton Prototypes
void inputInformation(Student students[], int n, int current = 0);
void displayInformation(const Student students[], int n);
double calculateAverageMarks(const int marks[], int size, int index = 0);
void displayHighestScorer(const Student students[], int n);
void searchByID(const Student students[], int n, int searchID);
void sortByAverageMarks(Student students[], int n);
void swapStudents(Student &a, Student &b);

int main()
{
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student students[MAX_STUDENTS];

    // Input information for students
    inputInformation(students, numStudents);

    // Display information of all students
    displayInformation(students, numStudents);

    // Calculate and display the highest scorer
    displayHighestScorer(students, numStudents);

    // Search for a student by ID
    int searchID;
    cout << "Enter the ID to search for: ";
    cin >> searchID;
    searchByID(students, numStudents, searchID);

    // Sort students by average marks in descending order
    sortByAverageMarks(students, numStudents);

    // Display information after sorting
    cout << "\nStudents sorted by average marks in descending order:\n";
    displayInformation(students, numStudents);
    system("pause");
}

void inputInformation(Student students[], int n, int current)
{
    if (current == n)
    {
        return;
    }
    cout << "Enter information for student " << current + 1 << ":\n";
    students[current].id = current + 1;
    cout << "Name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, students[current].name);
    cout << "Enter marks for " << students[current].name << ":\n";
    for (int i = 0; i < 3; ++i)
    {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> students[current].marks[i];
    }
    // Calculate and store the average marks
    students[current].average = calculateAverageMarks(students[current].marks, MAX_STUDENTS);
    inputInformation(students, n, current + 1);
}

void displayInformation(const Student students[], int n)
{
    cout << setw(5) << "ID" << setw(20) << "Name" << setw(15) << "Average Marks"
         << "\n";
    for (int i = 0; i < n; ++i)
    {
        std::cout << setw(5) << students[i].id << setw(20) << students[i].name
                  << setw(15) << fixed << setprecision(2) << students[i].average << "\n";
    }
    cout << endl;
}

double calculateAverageMarks(const int marks[], int size, int index)
{
    if (index == size)
    {
        return 0.0;
    }
    return (marks[index] + index * calculateAverageMarks(marks, size, index + 1)) / (index + 1);
}

void displayHighestScorer(const Student students[], int n)
{
    double maxAverage = 0.0;
    int maxIndex = -1;
    for (int i = 0; i < n; ++i)
    {
        if (students[i].average > maxAverage)
        {
            maxAverage = students[i].average;
            maxIndex = i;
        }
    }
    cout << "\nStudent with the highest average marks:\n";
    if (maxIndex != -1)
    {
        cout << "ID: " << students[maxIndex].id << "\n";
        cout << "Name: " << students[maxIndex].name << "\n";
        cout << "Average Marks: " << fixed << setprecision(2) << students[maxIndex].average << "\n";
    }
    else
    {
        cout << "No students found.\n";
    }
}

void searchByID(const Student students[], int n, int searchID)
{
    for (int i = 0; i < n; ++i)
    {
        if (students[i].id == searchID)
        {
            cout << "\nStudent found by ID:\n";
            cout << "ID: " << students[i].id << "\n";
            cout << "Name: " << students[i].name << "\n";
            cout << "Average Marks: " << fixed << setprecision(2) << students[i].average << "\n";
            return;
        }
    }
    cout << "No student found with ID " << searchID << "\n";
}

void sortByAverageMarks(Student students[], int n)
{
    // Using a simple bubble sort for demonstration purposes
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (students[j].average < students[j + 1].average)
            {
                swapStudents(students[j], students[j + 1]);
            }
        }
    }
}

void swapStudents(Student &a, Student &b)
{
    Student temp = a;
    a = b;
    b = temp;
}
