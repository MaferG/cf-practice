#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin >> a; 

    int b; 
    cin >> b;

    while(b--){
        if(a % 10 == 0){
            a = a / 10;
        } else {
            a = a - 1;
        }
    }

    cout << a << "\n";

    return 0;
}