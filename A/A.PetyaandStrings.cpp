#include <bits/stdc++.h>
using namespace std;

int main(){
     string a, b;
     cin >> a >> b;

     std::transform(a.begin(), a.end(), a.begin(), ::tolower);
     std::transform(b.begin(), b.end(), b.begin(), ::tolower);

     if(a < b){
        cout << "-1";  
     } else if (a > b){
          cout  << "1";
     } else {
          cout  << "0";
     }

     return 0;
}