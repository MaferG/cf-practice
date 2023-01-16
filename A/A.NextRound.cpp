#include <bits/stdc++.h>
using namespace std;

int main() { 
    int a, b, c;
    cin >> a >> b;

    vector<int> l;

    while(a--){
        cin >> c;
        l.push_back(c);
    }
    
    int sum = 0;
    for(auto i : l){
        if(i >= l[b - 1] && i > 0) sum++;
    }

    cout << sum << "\n";
    return 0; 
}