#include <iostream>
using namespace std;
void reverse(string &str);
int main()
{
    cout << "Enter the string: ";
    string str;
    getline(cin, str);
    cout << "THE REVERSE OF THE STRING: ";
    reverse(str);
}
void reverse(string &str)
{
    if (str.length() == 0)
    {
        return;
    }
    char ch = str[0];
    string ros = str.substr(1);
    reverse(ros);
    cout << ch << " ";
}
