#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    set<int> numbers;

    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        numbers.insert(a);
    }
    cout << 4 - numbers.size() << "\n";

    return 0;
}
