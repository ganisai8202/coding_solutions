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
		vector<int> arr(n,0);
		rep(i,0,n)
			cin>>arr[i];
		int flag=1;
		vector<vector<int>> res;
		res.push_back(arr);
		int k=0;
		while(flag){
			flag=0;
			unordered_map<int,int> count;
			for(auto itr:arr)
				count[itr]++;
			rep(i,0,n){
				arr[i]=count[arr[i]];
				if(arr[i]!=res[k][i])
					flag=1;
			}
			if(flag==0)
				break;
			res.push_back(arr);
			k++;
		}
		// for(int i=0;i<res.size();i++){
		// 	for(int j=0;j<res[0].size();j++){
		// 		cout<<res[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		int q;
		cin>>q;
		while(q--){
			int r,c;
			cin>>c>>r;
			int maxi=res.size()-1;
			cout<<res[min(r,maxi)][c-1]<<endl;
		}
    }
	return 0;
}
