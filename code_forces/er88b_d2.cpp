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
    while(t--)
    {
        int n,m,x,y,flag;
        cin>>n>>m>>x>>y;
        flag=(y<(2*x))?1:0;
        int sum=0;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int j=0;j<m;j++)
            {
                if(j!=m-1&&s[j]==s[j+1]&&s[j]=='.')
                {
                    if(flag==1)
                        sum+=y;
                    else
                        sum+=(2*x);
                    j++;
                }
                else if(s[j]=='.')
                    sum+=x;
            }
        }
        cout<<sum<<endl;
    }




	return 0;
}
