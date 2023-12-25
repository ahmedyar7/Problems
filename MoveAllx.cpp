#include <iostream>
using namespace std;
string moveallx(string str);
int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    string str = s;
    cout << moveallx(str);
}
string moveallx(string str)
{
    if (str.length() == 0)
    {
        return " ";
    }
    char ch = str[0];
    string ans = moveallx(str.substr(1));
    if ('x' == ch)
    {
        return ans + ch;
    }
    else
    {
        return ch + ans;
  
