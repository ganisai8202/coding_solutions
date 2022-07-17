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
    vector<int> h(n,0);
    vector<int> l(n,0);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    float res=0;
    for(int i=0;i<(n-1);){
        int k=i+1;
        float dx=(l[i]/2.0);
        while(k<n && h[k]<=h[i]){
            dx+=l[k];
            k++;
        }
        if(h[k]>h[i]){
            int d_h=h[k]-h[i];
            res=max(res,sqrt((d_h*d_h)+(dx*dx)));
        }
        i=k;
    }
    cout<<res<<endl;





	return 0;
}
