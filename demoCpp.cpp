#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
return a>b?a:b;

}
void lcs(char *x,char *y){
int l[20][20],i,j;
int m=strlen(x);
int n=strlen(y);
for(int i=0;i<=m;i++){
for(int j=0;j<=n;j++){
if(i==0 || j==0){
l[i][j]=0;
}
else if(x[i-1]=y[j-1]){
 l[i][j]=1+l[i-1][j-1];
}
else
l[i][j]=max(l[i-1][j],l[i][j-1]);

}

}
i=m;
j=n;
int x1=l[i][j];
char ss[x1+1];
ss[x1]='\0';
while(i>0 && j>0){
 if(x[i-1]==y[j-1]){
  ss[x1-1]=x[i-1];
  x1--;
  i--;
  j--;


 }
 else if(l[i-1][j]>l[i][j-1])
  i--;
else
 j--;


}
cout<<"The largest common subsequence is"<<ss<<endl;
cout<<"The length is"<<l[m][n]<<endl;

}
int main(){
char s1[20],s2[20];
cout<<"Enter the string"<<endl;
cin>>s1>>s2;
lcs(s1,s2);



}