#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;

    int x = 0 , y = 0, z = 0; 

    int a, b ,c;

    while(n--){
        cin >> a >> b >> c;

        x = x + a;
        y = y + b;
        z = z + c;
    }

    if(x == 0 && y == 0 && z == 0){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

	return 0;
}