#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a; 

    int b = 0;

    for(auto i : a){
        if(i == '4' || i == '7') b++; 
    }
    if(b == 7 || b == 4){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}