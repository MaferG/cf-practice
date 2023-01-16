#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;

    vector<char> b;

    for(char i : a){
        if(i != '+'){
            b.push_back(i);
        }
    }
    sort(b.begin(), b.end());
    char c = b[b.size() -1];
    b.pop_back(); 

    for(auto i : b ){
        cout << i << "+";
    }
    cout << c ;
     return 0;
}