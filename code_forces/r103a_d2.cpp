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
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxi,mini,max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            maxi=i;
            max=a[i];
        }
        if(a[i]<=min)
        {
            mini=i;
            min=a[i];
        }
    }
    int mov=0;
    if(maxi>mini)
        mov=(maxi)+((n-2)-(mini));
    else if(maxi<mini)
        mov=maxi+(n-1-mini);
    cout<<mov<<endl;


    return 0;
}
