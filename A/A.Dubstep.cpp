#include <iostream>
#include <regex>

using namespace std;

int main()
{
    string a;
    cin >> a;

    regex target("(WUB)+");
    string replacement = " ";
    string s2 = regex_replace(a, target, replacement);

    cout << s2 << "\n";
}