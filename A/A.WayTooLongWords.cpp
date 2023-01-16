#include <bits/stdc++.h>
using namespace std;

int main() { 
    ios::sync_with_stdio();
	cin.tie(0);

    int cant;
    cin >> cant; 

    vector<string> words; 
    string word; 

    while(cant > 0){
        cin >> word;
        words.push_back(word);
        --cant;
    }

    for(auto w: words){
        w.length() > 10 ? cout << w[0] << w.length() - 2 << w[w.length() - 1] << "\n" : cout << w << "\n";
    }

    return 0; 
}