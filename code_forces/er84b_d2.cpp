#include<bits/stdc++.h>

//#define int         long long
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

#define N  100005


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

  int t;
  cin>>t;
  while(t--)
  {
    int n;
    int num;
    cin>>n;
    int *b[n];
    rep(i,0,n)
    {
      cin>>num;
      b[i]=(int *)malloc((num+1)*sizeof(int));
      b[i][0]=num;
      rep(j,1,num+1)
      {
        cin>>b[i][j];
      }
    }
  /**  int p[n]={0};
    vector<int> k;
    rep(i,0,n)
      k.push_back(i+1);

    rep(i,0,n)
    {

      int limit=b[i][0];
      cout<<"check 1"<<endl;

      rep(j,1,limit+1)
      {
        if(find(k.begin(),k.end(),b[i][j])!=k.end())
        {
          cout<<"check "<<i<<" "<<j<<endl;
          p[i]=1;
          k[b[i][j]-1]=0;
          break;
        }
      }
    }
    cout<<"check 1"<<endl;
    int flag=0;
    int val;
    rep(i,0,n){
      if(p[i]==0)
      {
        for(auto itr:k)
          {
            if(itr!=0)
              val=itr;
          }
        cout<<"IMPROVE"<<endl;
        cout<<i+1<<" "<<val<<endl;
        flag=1;
        break;
      }
    }
    if(flag==1)
      cout<<"OPTIMAL"<<endl;
    free(b);
  **/}
  return 0;
}
