#include<iostream>

using namespace std;

int main()
{
    int t,i;
    int n,m;
    int bask[50],cost[50];
    cin>>t;
    while(t--)
    {
      cin>>n>>m;
      int F[m]={0};
      for(i=0;i<n;i++)
        cin>>bask[i];
      for(i=0;i<n;i++)
        cin>>cost[i];
      for(i=0;i<n;i++)
        F[bask[i]]+=cost[i];
      int min=99999999;
      int min_index;
      for(i=0;i<n;i++)
      {
        if(F[i]==0)
          continue;
        if(F[i]<min)
        {
          min_index=i;
        }
      }
      cout<<min_index<<endl;


    }
    return 0;
}
