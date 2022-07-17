#include<bits/stdc++.h>

#define MOD 1000000007

using namespace std;


typedef long long ll;
typedef pair<int,int> pii;
typedef  pair<ll,ll> pll;

int main()
{
   // ios_base:: sync_with_stdio(false);
   // cin.tie(NULL);
    ll s,x,a,b,n;

    scanf("%lld%lld%lld",&s,&x,&n);
    vector<pair<ll,ll> > vec;
    for(int i=0;i<n;i++)
    {
        scanf("%lld%lld",&a,&b);
        //cout<<a<<b;
       vec.push_back({a,b});
    }
    sort(vec.begin(),vec.end());
    int veci=0;
    ll day=0;
    ll prev=0,c=1;
     for(int i=0;i<n;i++)
     {
         a=(vec[i].first-prev-1)*x;
         if(s-a<=0)
         {

             if(s&&s%x) day=day+s/x+c;
             else day=day+s/x;
            // cout<<s/x<<"\n";
             s=0;
             break;
         }
         s=s-a-vec[i].second;

         day=vec[i].first;
         prev=day;
         if(s<=0) break;


     }
     if(s>0)
     {

             if(s%x) day=day+s/x+1;
             else day=day+s/x;
     }
    // cout<<day;
    printf("%lld\n",day);
  //897273495
}
