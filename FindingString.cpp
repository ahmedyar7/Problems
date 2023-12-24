#include <iostream>
using namespace std;
bool CheckPresent(string s);
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    string s = str;
    cout << CheckPresent(s);
}
bool CheckPresent(string s)
{
    string s3;
    cout << "Enter the string you want to find: ";
    getline(cin, s3);
    for (int i = 0; i < s.length(); i++)
    {
        if (s.find(s3) == 0)
            return true;
    }
    return false;
}
