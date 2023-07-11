#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // take the input
    int n; // size of array
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << "-->" << it.second << endl;
    }
    // prefetch
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << number << " appears " << mpp[number] << " times" << endl;
    }
    // iterate in the map
    for (auto it : mpp)
    {
        cout << it.first << "-->" << it.second << endl;
    }
    return 0;
}