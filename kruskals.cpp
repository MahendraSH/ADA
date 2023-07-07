#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int parent[10]={0};
int find(int i)
{
    while (parent[i])
    {
        i=parent[i];
    }
    return i;
    
}
int uni(int u,int v)
{
    if(u!=v)
    {
        parent[v]=u;
        return 1;
    }
    return 0;
}
void algo(int **a ,int n)
{
    int ne=1;
    int u,v;
    int ab,bb;
    int mon=0;
    while(ne<n)
    {
       int min=999;
        for(int i=0;i<n;i++)
        { 
            for(int j=0;j<n;j++)
            {
                if(min>a[i][j])
                {
                    min=a[i][j];
                   ab= u=i;
                   bb= v=j;
                }
            }

        }
        // cout <<u<< " "<< v<<endl;
        u=find(u);   
        v=find(v);
        if(uni(u,v))
        {
             cout<<ne++ <<" "<<ab+1<<" ,"<< bb+1<<" ="<<min<<endl;
             mon+=min;
        } 
        a[ab][bb]=a[bb][ab]=999;
        }
        cout<<mon<<endl;
}
int main()
{
    
    int n;
    cin>>n;
    int ** a=new int *[n];
    for(int i=0;i<n;i++)
    {
        a[i]=new int [n];
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
              a[i][j]=999;
        }
    }
    algo(a,n);
    for(int i=0;i<10;i++)
    cout<<parent[i]<<" ";
}
