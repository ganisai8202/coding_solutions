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
        int count=0;
        int mul=1;
        vector<int> arr;
        while(n){
            int r=n%10;
            r=r*mul;
            if(r!=0)
                arr.push_back(r);
            mul*=10;
            n/=10;
        }
        cout<<arr.size()<<endl;
        for(int i=arr.size()-1;i>0;i--)
            cout<<arr[i]<<" ";
        cout<<arr[0]<<endl;
    }
	return 0;
}
