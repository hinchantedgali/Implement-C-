#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // DECLARE VECTOR
    vector<int> v;
    // v = {2,34,52,42,223,124}
    v.push_back(2);
    v.emplace_back(34);
    v.emplace_back(52);
    v.emplace_back(42);
    v.emplace_back(223);
    v.emplace_back(124);
    // v2 = {23, 23, 23, 23, 23}
    vector<int> v2(5, 23);
    // v3 = {23, 23, 23, 23, 23}
    vector<int> v3(v2);

    // PRINT VECTORS --> for each, iterator, auto, v[i]

    /*cout << v[1];
     cout << endl;*/

    /*for (vector<int>:: iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it)  << " ";
    } */
    // auto le lo (to auto assign datatypes)

    /*for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    } */

    // for each loop
    for (auto it : v)
    {
        cout << (it) << " ";
    }
    cout << endl;

    /*for (int i = 0; i < 5; i++)
    {
        cout << v2[i];
        cout << endl;
    } */

    // HOW TO DELETE ELEMENTS IN VECTORS
    // v.erase(v.begin());
    // v.erase(v.begin()+2);
    // v.erase(v.end() - 1);

    //{2, 34, 52, 42, 223, 124}
    v.erase(v.begin() + 1, v.begin() + 4);
    //{2, 223, 124}

    v.insert(v.begin(), 44);
    v.insert((v.begin() + 1), 3, 8);

    for (auto it : v)
    {
        cout << (it) << " ";
    }

    return 0;
}