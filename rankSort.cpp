#include<iostream>
using namespace  std;
void ranksort(int *a,int n)
{
    int *rank =new int[n];
    for(int i=0;i<n;i++)
    {
        rank[i]=-1;
    }
    int *b=new int [n];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>=a[j])
            {
                rank[i]++;
            }
            else
            {
                rank[j]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
       b[rank[i]]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<rank[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    return ;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    ranksort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<< " ";
    cout<<endl;
}