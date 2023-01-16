#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int b, c = 0;
    
    while (a--)
    {
        cin >> b;
        c += b;
    }

    if(c > 0){
        cout << "HARD";
    } else {
        cout << "EASY";
    }
    
    return 0;
}