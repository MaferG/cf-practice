#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    string b = to_string(++a);

    set<int> c(b.begin(), b.end());

    while (c.size() != b.length())
    {
        b = to_string(a++);
        c.clear();
        c.insert(b.begin(), b.end());
    }

    cout << b;
    return 0;
}