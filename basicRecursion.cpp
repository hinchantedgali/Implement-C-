#include <bits/stdc++.h>
using namespace std;

// print name n times
void printName(int i, int n)
{
    if (i > n)
        return;
    else
        cout << "Hina Chandra IFS" << endl;

    printName(i + 1, n);
}

// print linearly 1 to N
void printt(int i, int n)
{
    if (i > n)
        return;
    else
        cout << i << " ";
    printt(i + 1, n);
}

// print from N to 1
void printtRev(int i, int n)
{
    if (i < 1)
        return;
    else
        cout << i << " ";
    printtRev(i - 1, n);
}

// print form 1 to N using BACKTRACKING
void printUsingBacktracking(int i, int n)
{
    if (i < 1)
        return;
    printUsingBacktracking(i - 1, n);
    cout << i << " ";
}

// print form N to 1 using BACKTRACKING
void printRevUsingBacktracking(int i, int n)
{
    if (i > n)
        return;
    printRevUsingBacktracking(i + 1, n);
    cout << i << " ";
}

// print sum of first N numbers using parameterised Recursion
void sumPrec(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sumPrec(i - 1, sum + i);
}

// print sum of first N numbers using functional recursion
int sumRec(int n)
{
    if (n == 0)
        return 0;
    return n + sumRec(n - 1);
}

// factorial of N
int fact(int n)
{
    if (n == 1)
        return 1;
    return fact(n - 1) * n;
}

// reverse Array using l & r parameters
void revArray(int l, int r, int arr[])
{
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    revArray(l + 1, r - 1, arr);
}

// reverse array using one parameter only
void revArr(int i, int n, int arr[])
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    revArr(i + 1, n, arr);
}

// String isPalindrome or not
bool isPalindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return isPalindrome(i + 1, s);
}

// fibonacci
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    /*int arr[n];
    /*string s = "MADAM";
    cout << isPalindrome(0, s);

    /*for (int i = 0; i < n; i++)
        cin >> arr[i];

    revArr(0, n, arr);

    for (int x : arr)
        cout << x << " ";
        */
    cout << fib(n);
    return 0;
}