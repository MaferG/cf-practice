#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    double b, c = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        c += b;
    }
    printf("%0.12f", c / a);

    return 0;
}