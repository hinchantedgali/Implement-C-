#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int age;
    cin >> age;
    if (age >= 18)
        cout << "ADULT";
    else
        cout << "NOT ADULT";
    return 0;
}