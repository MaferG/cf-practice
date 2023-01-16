#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    char b[a];
    cin >> b;

    int c = 0, d = 0;

    while (a--)
    {
        b[a] == 'A' ? c++ : d++;
    }

    if (c == d)
    {
        cout << "Friendship"
             << "\n";
    }
    else if (c > d)
    {
        cout << "Anton"
             << "\n";
    }
    else
    {
        cout << "Danik"
             << "\n";
    }

    return 0;
}