#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    string b;
    cin >> b;

    for (int i = 0, j = b.size() - 1; i < a.size(); i++, j--)
    {
        if (a[i] != b[j])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}