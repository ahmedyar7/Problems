#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the string: ";
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[j] < str[i])
            {
                char temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
}
