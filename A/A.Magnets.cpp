#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    string b, c = "";
    int d = 0;

    while (a--)
    {
        cin >> b;
        if (c != b)
        {
            d++;
            c = b;
        }
    }

    cout << d << "\n";

    return 0;
}