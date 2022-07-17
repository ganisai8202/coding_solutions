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

int primediv(int n)
{
  if(n%2==0)
    return 2;
  for(int i=3;i<=sqrt(n);i+=2)
  {
    if(n%i==0)
      return i;
  }
  return n;
}


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int t,n,k;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    int fn;
    fn=primediv(n);
    if(fn!=n)
      n=n+(fn*k);
    else
      n=n+fn+((k-1)*2);
    cout<<n<<endl;
  }




	return 0;
}
