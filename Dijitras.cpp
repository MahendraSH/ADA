#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n,num, min;

cout<<"Enter the vertices please\n";

cin>>n;
  int cost[n+1][n+1],s[n+1],i,j,v,u,w,dist[n];

cout<<"Enter the cost of the edges please\n";

  cout<<"Enter 999 if the edgeis not present or for the self loop\n";
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
    //   scanf ("%d", &cost[i][j]);
    cin>>cost[i][j];
    }
  }

cout<<"Enter the Source vertex please\n";

cin>>v;
  for (i = 1; i <= n; i++)
    {
      s[i] = 0;
      dist[i] = cost[v][i];
    }

  s[v] = 1;
  dist[v] = 0;

  for (num = 2; num <= n - 1; num++)
{
      min = 999;
      for (w = 1; w <= n; w++)
      {
	      if (s[w] == 0 && dist[w] < min)
	      {
	        min = dist[w];
	        u = w;
	      }
      }
      s[u] = 1;

      for (w = 1; w <= n; w++)
	    {
	       if (s[w] == 0)
	      {
	      if (dist[w] > (dist[u] + cost[u][w]))
		        dist[w] = (dist[u] + cost[u][w]);
        } 
	    }
}


cout<<"VERTEX  DESTINATION  COST\n";
  for (i = 1; i <= n; i++)
  {
   cout<<v<<"       "<<i<<"            "<<dist[i]<<endl;
  }
  return 0;
}