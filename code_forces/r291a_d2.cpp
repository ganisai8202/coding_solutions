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
    string n;
    cin>>n;
    ll res=0;
    for(int i=0;i<n.length();i++){
        if((n[i]<'5') || (i==0 && n[i]=='9'))
            res=res*10 +(n[i]-'0');
        else
            res=res*10 + (9-(n[i]-'0'));

    }
    if(res!=0)
    cout<<res<<endl;
    else
    cout<<9<<endl;





	return 0;
}
