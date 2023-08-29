#include <iostream>
using namespace std;

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < (2 * i + 1); j++)
            {
                cout << "*";
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
    pattern7(n);

    return 0;
}
