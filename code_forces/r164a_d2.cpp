#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<pair<int,int>> a;
  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    a.push_back(make_pair(x,y));
  }
  int count=0;
  for(int i=0;i<n;i++)
  {
    for(int k=0;k<n;k++)
    {
      if(a[i].first==a[k].second)
        count++;
    }
  }
  cout<<count<<endl;

}
