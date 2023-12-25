#include <iostream>
using namespace std;
string substring(string &str, string ans);
int main()
{
    cout << "Enter the string: ";
    string str;
    getline(cin, str);
    string ans = "";
    substring(str, ans);
}
string substring(string &str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return "";
    }
    char ch = str[0];
    string ros = str.substr(1);
    substring(ros, ans);
    substring(ros, ans + ch);
}
