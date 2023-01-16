#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int b, c;

    int current = 0, final = 0;

    while(a--){
        cin >> b >> c;

        current = current - b + c;

        if(current > final){
            final = current;
        }

    }
    cout << final << "\n";
    return 0;
}