#include <bits/stdc++.h>
using namespace std;

int main(){

    int c, x = 0;
    cin >> c;

    string a;
    cin >> a;

    for(int i = 0; i < c; ++i)
        if(a[i] == a[i - 1]) ++x;

    cout << x; 

    return 0;
}