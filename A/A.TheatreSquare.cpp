#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b, c;
	cin>> a >> b >> c;

	cout << (a / c + (a % c > 0 ? 1 : 0)) * (b / c + (b % c > 0 ? 1 : 0)) << "\n";

	return 0;
}

