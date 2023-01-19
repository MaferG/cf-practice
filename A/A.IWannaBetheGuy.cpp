#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> levels;
    int number;

    int level;
    cin >> level;

    int cuantity;
    cin >> cuantity;

    while (cuantity--)
    {
        cin >> number;
        levels.insert(number);
    }

    cin >> cuantity;

    while (cuantity--)
    {
        cin >> number;
        levels.insert(number);
    }

    if (levels.size() == level)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}