
#include<iostream>
using namespace std;
void warshal(int **a,int n)
{
  for(int k=0;k<n;k++)
  {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=a[i][j]||(a[i][k]&& a[k][j]);
        }
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
    int n;
    cin>>n;
    int **a=new int *[n];
    for(int i=0;i<n;i++)
    {
        a[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
  warshal(a,n);
}