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
    vector<pi> a;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x!=y)
        {
            cout<<"rated"<<endl;
            return 0;
        }
        a.push_back({x,y});
    }
    string s;
    int flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1].first>a[i].first)
            flag=0;

    }
    s=(!flag)?"unrated":"maybe";
    cout<<s<<endl;
    return 0;
}
