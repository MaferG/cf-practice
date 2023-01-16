#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int b;
    cin >> b;

    string c;
    cin >> c;

    char aux;

    while (b--)
    {
        for (int i = 0; i < a - 1; i++)
        {
            if (c[i] == 'B' && c[i + 1] == 'G')
            {
                aux = c[i];
                c[i] = c[i + 1];
                c[i + 1] = aux;
                i++;
            }
        }
    }

    cout << c << "\n";

    return 0;
}