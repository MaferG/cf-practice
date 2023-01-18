#include <bits/stdc++.h>
using namespace std;

int main()
{

    int c;
    cin >> c;

    int b;

    vector<int> a;

    while (c--)
    {
        cin >> b;
        a.push_back(b);
    }
    
    sort(a.begin(), a.end());

    for (auto i : a)
    {
        cout << i << " ";
    }

    return 0;
}