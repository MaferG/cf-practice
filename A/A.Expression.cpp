#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> con(6);

    con[0] = ((a + b) * c);
    con[1] = (a * (b + c));
    con[2] = ((a * b) + c);
    con[3] = (a + (b * c));
    con[4] = (a * b * c);
    con[5] = (a + b + c);

    sort(con.begin(), con.end());

    cout << con[5] << "\n";

    return 0;
}