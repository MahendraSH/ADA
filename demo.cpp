#include <iostream>
#include <math.h>
using namespace std;
int a[30];
bool place(int k)
{
    for (int i = 0; i < k; i++)
    {
        if (a[i] == a[k] || (abs(a[i] - a[k]) == abs(i - k)))
            return 0;
    }
    return 1;
}
void sol(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i] == j)
                cout << "Q"
                     << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }
}

void queens(int n)
{
    int k = 1;
    a[k] = 0;
    while (k != 0)
    {
        a[k]++;
        while (a[k] <= n && !place(k))
        {
            a[k]++;
        }
        if (a[k] <= n)
        {
            if (k == n)
            {
                sol(n);
                cout << endl;
            }
            else
            {
                k++;
                a[k] = 0;
            }
        }
        else
        {
            k--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    queens(n);
}