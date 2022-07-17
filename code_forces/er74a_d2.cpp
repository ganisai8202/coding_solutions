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
while(t--){
  int x,y;
  cin>>x>>y;
  int diff=x-y;
  if(diff==1)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;
  /**if(!(diff&1))
    cout<<"YES"<<endl;
  else if(diff==1)
    cout<<"NO"<<endl;
  else
  {
    for(int i=3;i<sqrt(diff);i=i+2)
    {
      while(diff%i==0)
      {
        print("YES")
      }
    }
  }**/


}

	return 0;
}
