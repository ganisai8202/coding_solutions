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
  vector<int> p;
  cin>>t;
  while (t--) {
    int h,n,mc=0;
    cin>>h>>n;
    p.resize(n);
    for(int i=0;i<n;i++)
      cin>>p[i];
    int height=h;
    for(int i=0;i<n-1;i++)
    {
      if(height==2)
        break;
      if(height<p[i])
        continue;
      else if(height==p[i])
      {
        if(height-p[i+1]==1)
        {
          if((i+2)<n&&height-p[i+2]==2)
          {
            height=p[i+2];
          }
          else if((i+2)<n)
          {
            mc++;
            height=p[i+2]+1;
          }
        }
        else
          height=p[i+1]+1;
      }
      else
      {
        if(height-p[i]==1)
        {
          if((i+1)<n&&height-p[i+1]==2)
          {
            height=p[i+1];
          }
          else
          {
            mc++;
            height=p[i+1]+1;
          }
        }

      }
    }
    if(height!=2&&p[n-1]==height-1)
      mc++;
    cout<<mc<<endl;

  }




	return 0;
}
