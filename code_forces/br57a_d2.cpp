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
    string a,b;
    cin>>a;
    cin>>b;
    int n=a.length();
    for(int i=0;i<n;i++){
        if(a[i]==b[i])
            cout<<0;
        else
            cout<<1;
    }




	return 0;
}
