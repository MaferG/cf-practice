#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin >> a;

    long long int b = 0;

    if (a % 2 == 0)
    {
        b = (a + 1) / 2;
    }
    else
    {
        b = -((a + 2) / 2);
    }

    cout << b << "\n";

    return 0;
}