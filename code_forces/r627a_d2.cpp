#include<bits/stdc++.h>

//#define int         long long
#define pb          push_back
#define	endl        '\n'
#define pi          pair<int, int>
#define pii         pair<int, pi>
#define vi          vector<int>
#define vpi         vector<pi>
#define si          set<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define inv(i,a,b)  for(int i=a;i>=b;i--)
#define mp          make_pair
#define isp(x, i)   ((x).find(i)!=x.end())

using namespace std;

#define N  100005


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int t,n;
  cin>>t;
  while (t--) {
    cin>>n;
    int a[n];
    rep(i,0,n)
      cin>>a[i];
    auto max=max_element(a,a+n);
    while(max>(n-1))
    {
    auto min=min_element(a,a+n);
    *min+=2;
    rep(i,0,n)
      if(a[i]>0)
        a[i]-=1;

  }
  return 0;
}
