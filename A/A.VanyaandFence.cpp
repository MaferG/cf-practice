#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int b;
    cin >> b;

    int c, d = 0;

    while (a--)
    {
        cin >> c;
        d = d + (c / b);
        if (c % b > 0)
        {
            d++;
        }
    }

    cout << d;
    return 0;
}