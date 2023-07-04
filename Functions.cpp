#include <iostream>
using namespace std;
// Functions- used to do some specific tasks.
//  to modularize code
//  to increase readability
//  to use the same code multiple times
//  types:
//  void -> which doesn't return anything
//  return -> which returns something
//  parameterized ->
//  non parameterized ->
//  pass by value -> creates a copy of the actual parameters which goes in formal parameters
//  pass by reference

void printName(string name)
{
    cout << "Hola " << name << "!";
};

int sum(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
};

int maxx(int n1, int n2)
{
    if (n1 >= n2)
        return n1;
    else
        return n2;
};

void doSomething(string &s)
{
    s[0] = 't';
    cout << s;
};
void printArray(int arr[], int n)
{
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string name;
    // cin >> name;
    int n1, n2;
    // cin >> n1 >> n2;

    // cout << sum(n1, n2);
    // printName(name);
    // cout << name << endl;
    doSomething(name);
    // cout << maxx(n1, n2);
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, n);
    cout << "Value inside main: " << arr[0] << endl;

    return 0;
}
