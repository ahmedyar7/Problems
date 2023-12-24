#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string :";
    getline(cin, str);
    string rstr = str;
    reverse(rstr.begin(), rstr.end());
    if (rstr == str)
    {
        cout << "Plaindriom";
    }
    else
    {
        cout << "NOT_planidrom";
    }
}
