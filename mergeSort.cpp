#include <iostream>
using namespace std;
void merge(int *a, int low, int mid, int high)
{
    int x = mid + 1 - low;
    int y = high - mid;
    int *m = new int[x];
    int *n = new int[y];

    for (int j = 0; j < x; j++)
    {
        m[j] = a[j + low];
    }

    for (int j = 0; j < y; j++)
    {
        n[j] = a[j + mid + 1];
    }
    int i = 0;
    int j = 0;
    int k = low;
    while (i < x && j < y)
    {
        if (n[j] > m[i])
        {
            a[k] = m[i];
            i++;
        }
        else
        {
            a[k] = n[j];
            j++;
        }
        k++;
    }
    while (i < x)
    {
        a[k] = m[i];
        i++;
        k++;
    }
    while (j < y)
    {
        a[k] = n[j];
        j++;
        k++;
    }
    // for (i = 0; i < x; i++)
    // {
    //     cout << m[i] << " ";
    // }
    // cout << endl;
    // for (i = 0; i < y; i++)
    // {
    //     cout << n[i] << " ";
    // }
    // cout << endl;
}
void mergeSort(int *a, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}