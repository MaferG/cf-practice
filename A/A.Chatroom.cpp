#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    string b = "hello";
    int j = 0;

    for(auto i : a){
        if(i == b[j])
            j++;
    }
    if(j == 5){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}