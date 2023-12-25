#include <iostream>
using namespace std;
string permuate(string &str, string ans);
int main()
{
    cout << "Enter the string: ";
    string str;
    getline(cin, str);
    string ans = "";
    permuate(str, ans);
}
string permuate(string &str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return "";
    }
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        string ros = str.substr(0, i) + str.substr(i + 1);
        permuate(ros, ch + ans);
    }
}
