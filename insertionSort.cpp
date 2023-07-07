#include <iostream>
using namespace std;
// void insertSort(int *a, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int j = i;
//         int c = a[j+1];
//         while (a[j] >= c && j >= 0)
//         {
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j + 1] = c;
//     }
//     return;
// }
void insertSort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int j=i;
        int c=a[j+1];
        while(j>=0 && a[j]>=c )
        {
            
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=c;
    }
}
void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    insertSort(a,n);
    display(a,n);
}