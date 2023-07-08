#include <bits/stdc++.h>
using namespace std;

// func to extract digits in reverse order of a number
void extractDigits(int n)
{

    while (n != 0)
    {
        int d = n % 10;
        cout << d << endl;
        n /= 10;
    }
}

// func to count digits of a number
void countDigits(int n)
{
    int count = 0;

    count = (int)log10(n) + 1;
    /*while (n > 0)
    {

        n /= 10;
        count++;
    }
    */
    cout << count;
}

// reverse a number
void reverseNum(int n)
{
    int d;
    int rn = 0;

    while (n > 0)
    {
        d = n % 10;

        rn = rn * 10 + d;
        n /= 10;
    }
    cout << rn << endl;
}

// imp tuff
//  reverse the number in binary and convertto decimal
void reversedBits(long long X)
{
    // code here
    int binNum[32];
    int i = 0;

    // to get Binary Reverse of number
    while (X > 0)
    {
        binNum[i] = X % 2;
        X /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binNum[j]);

    cout << endl;

    // to convert to decimal
    long long n = 0;
    long long base = 1;
    float pow = 31;
    for (int j = 0; j <= i - 1; j++)
    {

        base = (long long)powf(2.0, pow);

        n = binNum[j] * base + n;
        pow--;
    }
    cout << n;
}

void palindrom(int n)
{
    int org = n;
    int rev = 0;

    while (n)
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    if (org == rev)
        cout << "Palindrom";
    else
        cout << "Not a Palindrom";
}

void armstrongNum(int n)
{
    int temp = n;
    int num = 0;
    int count = log10(temp) + 1;

    while (temp)
    {
        int d = temp % 10;
        d = (int)pow((float)d, (float)count);
        num = num + d;
        temp /= 10;
    }
    if (num == n)
        cout << "An armstrong number";
    else
        cout << "Not an armstrong number";
}

void printAllDivisors(int n)
{
    vector<int> ls;
    // intstead of writing sqrt(n) -> i*i<=n
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if (i != (n / i))
                ls.push_back(n / i);
        }
    }
    sort(ls.begin(), ls.end());
    for (auto x : ls)
        cout << x << " ";
    /*for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }*/
}

void primeOrNot(int n)
{

    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "prime";
    }
    else
        cout << "not prime";
}

void euclidienGCD(int a, int b)
{

    while (a != 0 && b != 0)
    {

        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        cout << b;
    else
        cout << a;
}

void maxx(int a, int b)
{
    cout << max(a, b);
}

void lcmAndGcd(long long a, long long b)
{
    // code here
    vector<long long> v;
    long long gcd, lcm;

    // for hcf
    while (a != 0 && b != 0)
    {

        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    if (a == 0)
        gcd = b;

    else
        gcd = a;

    // for lcm

    lcm = a * b / gcd;

    v.push_back(lcm);
    v.push_back(gcd);

    cout << v[0] << " " << v[1];
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    int b;
    cin >> n;
    cin >> b;
    lcmAndGcd(n, b);

    return 0;
}