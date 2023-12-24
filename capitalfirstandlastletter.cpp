#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 || i == (str.length() - 1))
        {
            str[i] = toupper(str[i]);
        }
        else if (str[i] == ' ')
        {
            str[i + 1] = toupper(str[i + 1]);
            str[i - 1] = toupper(str[i - 1]);
        }
    }
    cout << str << endl;
}
