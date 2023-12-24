#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string: "; 
    getline(cin, str);
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    cout << count + 1;
}
