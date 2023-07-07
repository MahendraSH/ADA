#include <iostream>
using namespace std;
void findIndegree(int **a, int *indgree, int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[j][i];
        }
        indgree[i] = sum;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int *indgree = new int[n];
    int top = -1;
    int *stack = new int[n];
    findIndegree(a,indgree,n);

    for (int i = 0; i < n; i++)
    {
        if (indgree[i] == 0)
        {
            top++;
            stack[top] = i;
        }
    }
    while (top != -1)
    {
        int s = stack[top--];
        cout << s << " ";
        for (int i = 0; i < n; i++)
        { 
            if (a[s][i] == 1)
            {
                indgree[i]--;
                if (indgree[i] == 0)
                {
                    top++;
                    stack[top] = i;
                }
            }
        }
    }
}