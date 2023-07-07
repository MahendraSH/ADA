#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *weight=new int[n+1];
    int *profit=new int[n+1];
    // profit[0]=weight[0]=0;
    cout<<"weight and profit"<<endl;
    for(int i=1;i<=n;i++)
    {
       cin>>weight[i]>>profit[i];
    }
    int Capacity;
    cin>>Capacity;
    int matrix[n+1][Capacity+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=Capacity;j++)
        {
            if(i==0 || j==0)
            {
                matrix[i][j]=0;
            }
            else if(weight[i]>j)
            {
                matrix[i][j]=matrix[i-1][j];
            }
            else{
                if(matrix[i-1][j]>matrix[i-1][j-weight[i]]+profit[i])
                {
                    matrix[i][j]=matrix[i-1][j];
                }
                else
                {
                     matrix[i][j]=matrix[i-1][j-weight[i]]+profit[i];
                }
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=Capacity;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<matrix[n][Capacity];
    cout<<endl;

    int j=Capacity;
    j=matrix[n][Capacity];
    for(int i=n;i>0 ;i--)
	if(matrix[i][j]!=matrix[i-1][j])
    {
        cout<<i<<" ";
        j-=weight[i];
    }
    cout<<endl;

    return 0;
}
