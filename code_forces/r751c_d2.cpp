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
        int n;
        cin>>n;
        vector<int> cnt(32,0);
        int x;
        int j=0;
        for(int i=0;i<n;i++){
            j=0;
            cin>>x;
            while(x>0){
                if(x&1)
                    cnt[j]++;
                x>>=1;
                j++;
            }
        }
        cout<<1<<" ";
        for(int i=2;i<=n;i++){
            bool bad=true;
            for(int j=0;j<32;j++){
                if(cnt[j]%i){
                    bad=false;
                    break;
                }
            }
            if(bad){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
	return 0;
}
