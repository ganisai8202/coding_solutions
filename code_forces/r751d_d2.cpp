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

int dp[300001];
vector<int> res;

ll solve(int n,vector<int> &jump,vector<int> &slip,vector<int> steps){
    if(n<=0){
        if(res.size()==0)
            res=steps;
        else if(steps.size()<res.size())
            res=steps;
        return 0;
    }
    if(dp[n]>=0)
        return dp[n];

    if(dp[n]==-2)
        return dp[n]=INT_MAX;
    dp[n]=-2;
    int max_jump=jump[n-1];
    ll ans=INT_MAX;
    int flag=0;
    for(int i=1;i<=max_jump;i++){
        int x=n-i;
        if((n-i)<=0){
            flag=1;
        }
        if(!flag)
            x+=slip[n-i-1];
        //cout<<i<<" "<<x<<endl;
        steps.push_back(max(0,n-i));
        ans=min(ans,1+solve(x,jump,slip,steps));
        if(flag)
            break;
        steps.pop_back();
    }
    return dp[n]=ans;

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    vector<int> jump(n,0);
    vector<int>slip(n,0);
    for(auto &i:jump)
        cin>>i;

    for(auto &i:slip)
        cin>>i;
    ll ans=solve(n,jump,slip,vector<int> (0));
    if(ans==INT_MAX){
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans<<endl;

    for(auto itr:res)
        cout<<itr<<' ';
    cout<<endl;
}
