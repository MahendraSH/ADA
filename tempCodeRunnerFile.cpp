#include <iostream>
const int x = 6;
const int y = 6;
using namespace std;
bool Graph[x][y] = {
    {0, 1, 1, 0, 0, 1},
    {1, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1}};
bool bipartiteCoverMax(int u, bool vis[], int a[])
{
    for (int v = 0; v < y; v++)
    {
        if (Graph[u][v] && !vis[v])
        {
            vis[v] = true;
            if (a[v] < 0 || bipartiteCoverMax(a[v], vis, a))
            {
                a[v] = u;
                return true;
            }
        }
    }
    return false;
}
int maximumMatch()
{
    int a[y];
    for (int i = 0; i < y; i++)
        a[i] = -1;
    int Count = 0;
    for (int u = 0; u < x; u++)
    {
        bool vis[y];
        for (int i = 0; i < y; i++)
            vis[i] = false;
        if (bipartiteCoverMax(u, vis, a))
            Count++;
    }
    return Count;
}
int main()
{
    cout << "Maximum number of  matching : " << maximumMatch();
}
