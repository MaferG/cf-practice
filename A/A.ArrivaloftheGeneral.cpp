#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    vector<int> b;

    int c, max = -1, min = 101, inxMin = 0, inxMax = a - 1;

    for (int i = 0; i < a; i++)
    {
        cin >> c;
        b.push_back(c);

        if (c > max)
        {
            max = c;
            inxMax = i;
        }
        if (c <= min)
        {
            min = c;
            inxMin = i;
        }
    }

    int r = inxMax + ((b.size() - 1) - inxMin); 
    cout <<( inxMax > inxMin ? r  - 1 : r) << "\n";

    return 0;
}