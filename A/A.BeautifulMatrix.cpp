#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 25, b;
    int p= 0, q = 0;

    while (a--){
        cin >> b;
        if(b == 1){
            p = a / 5;
            q = a % 5;
            break;
        }
    }
    cout << abs(2 - p) + abs(2 - q) << "\n";

    return 0;
}