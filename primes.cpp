#include<iostream>
using namespace std;
void algo(int **a,int n)
{
    int vis[n]={0};
    int mincost=0;
    vis[0]=1;
    int u,v,aa,bb;
   int ne=1;
   while(ne<n)
   {
    int min=999;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(a[i][j]<min && vis[i]!=0)
           {
            u=aa=i;
            v=bb=j;
            min=a[i][j];
           }
        }
    }
    if(vis[u]==0 || vis[v]==0)
    {
        cout<< ne++ <<" "<<u+1 <<" "<<v+1<<" +"<<min<< endl;
        mincost+=min;
    }
    a[aa][bb]=a[bb][aa]=999;
    vis[bb]=1;
   }
   cout<<mincost<<endl;
}
// using namespace std;
int main()
{
    int n;
    cin>>n;
    int **a=new int* [n];
    for(int i=0;i<n;i++)
    {
        a[i]=new int [n];
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    algo(a,n);
}