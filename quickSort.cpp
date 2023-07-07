#include<iostream>
using namespace std;
int  findPivot(int *a,int low,int high)
{
    int pivot=a[low];
  int i=low;
  int j=high+1;
  while(j>=i){
  do{i++;}while(pivot>=a[i]);
  do {j--; }while(pivot<a[j]);
  if(i<j)
  {
    int temp=a[j];
    a[j]=a[i];
    a[i]=temp;
    

  }
  
    
  }
  int temp=a[j];
  a[j]=a[low];
  a[low]=temp;
  return j;
}
void quickSort(int *a,int low ,int high)
{
    if(low <high)
    {
        int p=findPivot(a,low,high);
        quickSort(a,low,p-1);
        quickSort(a,p+1,high);

    }
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
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<< " ";
    cout<<endl;
}