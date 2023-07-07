#include<iostream>
using namespace std;
void selectionSort(int  *a,int n)
{
    for(int i=0;i<n;i++)
    {
        int max=0;
        for(int j=0;j<n-i;j++)
        {
            if(a[max]<a[j])
            {
                max=j;
            }
        }
        int temp=a[max];
        a[max]=a[n-i-1];
        a[n-i-1]=temp;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
  selectionSort(a, n);
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
  cout<<endl;

}