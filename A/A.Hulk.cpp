#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << "I ";
        if (i % 2 == 0)
        {
            cout << "love ";
        }
        else
        {
            cout << "hate ";
        }
        if (a == i)
        {
            cout << "it";
        }
        else
        {
            cout << "that ";
        }
    }

    return 0;
}
