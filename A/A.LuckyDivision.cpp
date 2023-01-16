#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> b = {4, 7, 47, 74, 44, 444, 447, 474, 477, 777, 774, 744};

    for (auto i : b)
    {
        if (a % i == 0)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}