#include <bits/stdc++.h>
using namespace std;

// NUMBER HASHING
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hashh[11] = {0}; // here we are giving numbers upto 10 >> so 11 is size
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1;
    }

    // prefetch
    int q; // number of queries
    cin >> q;
    while (q--) // until any query is there (postdecrement)
    {
        int number;
        cin >> number;
        // fetch
        cout << number << " appears " << hashh[number] << " times" << endl;
    }

    return 0;
}