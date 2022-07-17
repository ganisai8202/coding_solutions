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
    int n,p,q,x;
    unordered_set<int> res;
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>x;
        res.insert(x);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x;
        res.insert(x);
    }
    if(res.size()==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
