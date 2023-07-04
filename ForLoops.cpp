#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    for (int i = 0; i < 10; i++)
    {
        cout << i << " HINA CHANDRA IFS" << endl;
    }

    cout << endl;

    int i = 1;
    while (i <= 25)
    {
        cout << i << " HINA CHANDRA IFS" << endl;
        i = i + 5;
    }
    cout << i << endl;

    do
    {
        cout << i << " HINA CHANDRA IFS" << endl;
        i++;
    } while (i <= 25);

    cout << i;

    return 0;
}