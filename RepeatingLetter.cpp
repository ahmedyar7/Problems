#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the string: ";
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                cout << str[j] << " ";
                break;
            }
        }
    }
}
