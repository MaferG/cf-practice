#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int arr[a];

    int b;

    for (int i = 1; i < a + 1; ++i)
    {
        cin >> b;

        arr[b - 1] = i;
    }

    for (int i = 0; i < a; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}