#include <bits/stdc++.h>
using namespace std;

int main() { 
    int a; 
    cin >> a;

    string s;
    int v = 0;

    while(a--){
        cin >> s;
        (s == "X++" || s =="++X") ? v++ : v--;
    }
    cout << v << "\n";

    return 0; 
}