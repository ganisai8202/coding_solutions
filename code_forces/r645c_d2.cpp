#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll countpaths(ll a,ll b)
{
  if(a==1||b==1)
    return 1;
  return countpaths(a-1,b)+countpaths(a,b-1);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll res=countpaths((x2-x1+1),(y2-y1+1));
    cout<<res<<'\n';
  }
}
