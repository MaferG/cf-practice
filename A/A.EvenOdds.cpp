#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;

    a = a % 2 == 0 ? a : a + 1;

    if (b <= a / 2)
    {
        cout << b + (b - 1);
    }
    else
    {
        cout << (b - a / 2) + (b - a / 2);
    }

    return 0;
}