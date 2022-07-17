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

int solve(vector<int> &arr){
    ll s=0;
    int n=arr.size();
    for(auto itr:arr)
        s+=itr;
    if(s%3)
        return 0;
    ll req = s/3;
    ll res=1;
    int count=0;
    ll temp=0;
    for(int i=0;i<n;i++){
        temp+=arr[i]
        if(temp==req){
            while(temp==req)
        }
    }

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[n];


	return 0;
}
