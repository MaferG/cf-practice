#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int b, c;
    while (a--)
    {
        cin >> b >> c;
        cout << (b % c == 0 ? 0 : c - b % c) << "\n";
    }
    return 0;
}