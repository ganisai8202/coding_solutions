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

  int a[4];
  for(int i=0;i<4;i++)
    cin>>a[i];
  int sum=0;
  rep(i,0,4)
    sum+=a[i];
  int min=*min_element(a,a+4);
  int max=*max_element(a,a+4);
  int min_max=min+max;
  if(min_max==(sum-min_max) || max==(sum-max))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;




	return 0;
}
