#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);

    set<char> b;

    for (auto i : a)
    {
        if (i != '{' && i != '}' && i != ',' && i != ' ')
        {
            b.insert(i);
        }
    }
    cout << b.size() << "\n";
}