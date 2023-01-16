#include <bits/stdc++.h>
using namespace std;

int main(){
     int k, n, w;
     cin >> k >> n >> w;

     int a = 0, b = 1;

     while (w--)
     {
          a = a + (k * b++);
     }
     
     if(a - n < 0){
          cout  << "0" << "\n";
     } else {
          cout  << a - n << "\n";
     }
     return 0;
}