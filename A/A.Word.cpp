#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a; 

    string c; 

    int b = 0;
    int d = 0;


    for(auto i : a){
        if(isupper(i)) b++;
        else d ++; 
    }

    if(b > d){
        for(auto i : a)
            c.push_back(toupper(i));
    } else {
        for(auto i : a)
            c.push_back(tolower(i));
    }

    cout << c << "\n"; 

    return 0;
}