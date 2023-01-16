#include <bits/stdc++.h>
using namespace std;

int main() { 
    ios::sync_with_stdio();
	cin.tie(0);

    long int cant;
    cin >> cant; 
    getchar();

    string word; 
    int total = 0; 

    while(cant > 0){
        getline(std::cin, word);
        if(count(word.begin(), word.end(), '1') >= 2 )
            ++total;
        --cant;
    }

    cout << total << "\n";
    return 0; 
}