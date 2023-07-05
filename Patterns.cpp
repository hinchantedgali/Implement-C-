#include <iostream>
#include "Patterns.h"
using namespace std;
void pattern1(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }
};

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << "  ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j > 0; j--)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// for pattern 9-> i have combined patt7 and patt8

void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    /*for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 2; j <= i; j = j + 2)
            {
                cout << "0 1 ";
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "0 ";
                }
                else
                    cout << "1 ";
            }
        }

        cout << endl;
    }*/
    int start = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void pattern13(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char start = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}

void pattern15(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char start = 'A';
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    char start = 'A';
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
        }
        cout << endl;
        start++;
    }
}

void pattern17(int n)
{
    char start = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        char start = 'A';
        int breakpoint = (2 * i - 1) / 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << start;
            if (j <= breakpoint)
                start++;
            else
                start--;
        }

        cout << endl;
    }
}

void pattern18(int n)
{
    char end = 'A' + n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (char ch = end; ch <= end + i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
        end--;
    }
}
void pattern19(int n)
{
    // for the upper part
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j > 0; j--)
        {
            cout << "*";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = n - i + 1; j > 0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
    // for the lower part
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = n; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        int spaces = n - i;
        if (i > n)
        {
            stars = 2 * n - i;
            spaces = i - n;
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (i == 1 || j == 1 || i == n || j == n)
                cout << "*";
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}

void pattern22(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int top = i - 1;
            int left = j - 1;
            int down = 2 * n - 1 - i;
            int right = 2 * n - 1 - j;
            int m = min(min(top, left), min(down, right));
            cout << n - m;
        }
        cout << endl;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    pattern22(n);

    return 0;
}