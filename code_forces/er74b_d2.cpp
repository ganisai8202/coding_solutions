  #include<bits/stdc++.h>

  #define int         long long
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
    int t;
    cin>>t;
    while (t--) {
      int n,r;
      cin>>n>>r;
      int pos[n];
      for(int i=0;i<n;i++)
        cin>>pos[i];
      sort(pos,pos+n);
      n=unique(pos,pos+n)-pos;
      int ans=0;
      for(int i=n-1;i>=0;i--)
      {
        ans+=(pos[i]-ans*r>0);
      }
      printf("%lld\n",ans );


    }


  	return 0;
  }
