#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);

    string c;
    cin >> c;

    set<char> a(begin(c), end(c));

    if ((a.size() % 2 == 0))
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
