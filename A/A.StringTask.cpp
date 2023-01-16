#include <bits/stdc++.h>
using namespace std;

int main(){
     string a;
     cin >> a;

     char c;
     for(char i : a){
          c = tolower(i);
          if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y'){
               cout << "." << c;
          }
     }
     return 0;
}