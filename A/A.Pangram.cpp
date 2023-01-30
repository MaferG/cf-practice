#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    char b;

    set<int> c;

    while (a--)
    {
        cin >> b;
        b = tolower(b);
        c.insert(b);
    }
    cout << (c.size() == 26 ? "YES" : "NO") << "\n";
}