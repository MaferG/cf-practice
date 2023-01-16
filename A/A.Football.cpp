#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a; 

    int sum = 0;

    for(int i = 0; i < a.size() - 1; i++){
        if(a[i] == a[i +1]) sum ++;
        else sum = 0;

        if(sum == 6){
            cout<< "YES" << "\n";
            return 0;
        }
    }
    cout<< "NO" << "\n";

    return 0;
}