#include<bits/stdc++.h>

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
typedef long long ll;
#define N  100005


int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n;
    cin>>n;
    int dp[1<<22];
    memset(dp,-1,sizeof(dp));
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[a[i]]=a[i];
    }
    for(int i=0;i<22;i++){
        for(int mask=0;mask<(1<<22);mask++)
            if(mask&(1<<i))
                dp[mask]=max(dp[mask],dp[mask^(1<<i)]);
    }
    int full_mask=(1<<22)-1;
    for(int i=0;i<n;i++){
        int x=full_mask^a[i];
        cout<<dp[x]<<" ";
    }

	return 0;
}
