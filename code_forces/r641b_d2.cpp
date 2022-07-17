#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll arr[n+1];
        ll dp[n+1];
        memset(dp,0,sizeof(dp));
        for(ll i=1;i<=n;i++)
        {
            cin>>arr[i];
            dp[i]=1;
        }
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=i;j<=n;j+=i)
            {
                if(arr[j]>arr[i])
                {
                    dp[j]=max(dp[j],dp[i]+1);
                }
            }

        }
        for(ll i=0;i<=n;i++)
            ans=max(ans,dp[i]);
        cout<<ans<<endl;
    }
}

//another https://codeforces.com/contest/1350/submission/79859753
