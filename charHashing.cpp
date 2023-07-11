#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    // precompute
    int hashh[26] = {0}; // alternate: hashh[256] // for all the chars
    for (int i = 0; i <= s.size(); i++)
    {
        hashh[s[i] - 'a']++; // then hashh[s[i]]++; // no need for reletive pos
    }

    // prefetch
    int q; // number of queries
    cin >> q;
    while (q--) // until any query is there (postdecrement)
    {
        char c;
        cin >> c;
        // fetch
        cout << c << " appears " << hashh[c - 'a'] << " times" << endl;
    }

    return 0;
}