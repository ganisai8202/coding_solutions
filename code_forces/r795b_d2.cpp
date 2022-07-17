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
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> s(n),p(n);
        for(ll i=0;i<n;i++)
            cin>>s[i];
        for(ll i=0;i<n;i++)
            p[i]=i+1;
        ll l=0,r=0;
        bool flag=true;
        while(r<n){
            while(r+1<n && s[r]==s[r+1])
                r++;
            if(l==r){
                flag=false;
                break;
            }
            else
                rotate(p.begin()+l,p.begin()+r,p.begin()+r+1);
            l=r+1;
            ++r;
        }
        if(flag){
            for(auto itr:p)
                cout<<itr<<" ";
            cout<<endl;
        }
        else
            cout<<-1<<endl;

    }




	return 0;
}
