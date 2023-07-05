#include <iostream>
using namespace std;

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j > 0; j--)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    pattern3(n);

    return 0;
}