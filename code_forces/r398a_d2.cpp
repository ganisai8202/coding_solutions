#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  int n;
  cin>>n;
  vector<int> a(n+1,0);
  for(int i=1;i<=n;i++)
    cin>>a[i];
  unordered_set<int> q;
  int count=n;
  int i=1;
  while(i<=n)
  {
    while(a[i]!=count)
    {
      q.insert(a[i]);
      cout<<'\n';
      i++;
    }
    cout<<a[i]<<" ";
    count--;
    while(q.find(count)!=q.end())
    {
      cout<<count<<" ";
      q.erase(count);
      count--;
    }
    cout<<'\n';
    i++;
}



}
