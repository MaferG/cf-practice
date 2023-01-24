#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    vector<int> b;

    int c, last = 1, cont = 1;

    cin >> c;
    b.push_back(c);

    for (int i = 1; i < a; i++)
    {
        cin >> c;
        b.push_back(c);

        if (b[i] >= b[i - 1])
        {
            cont++;
            if (last < cont)
            {
                last = cont;
            }
        }
        else
        {
            cont = 1;
        }
    }
    cout << last << "\n";

    return 0;
}