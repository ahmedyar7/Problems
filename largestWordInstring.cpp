#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the string: ";
    string str;
    getline(cin, str);
    string sa = "";
    string st = "";
    int longest = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            if (longest < sa.length())
            {
                longest = sa.length();
                st = sa;
            }
            sa = "";
        }
        else
        {
            sa += str[i];
        }
    }
    if (longest < sa.length())
    {
        longest = sa.length();
        st = sa;
    }
    cout << st << endl;
}
