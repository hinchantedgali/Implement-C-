#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s = "Hina Chandra IFS";
    //  int len = s.length();
    int len = s.size();

    s[3] = 'A';
    cout << s << endl;
    cout << s[len - 1];

    return 0;
}