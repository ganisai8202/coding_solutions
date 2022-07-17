#include<bits/stdc++.h>

#define int         long long
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
  int h,w;
  int i,j;
  cin>>h>>w;

  int a[h][w]={};
  int r[h];
  for(int i=0;i<h;i++)
  {
    cin>>r[i];
  }
  for(i=0;i<h;i++){
    for(j=0;j<r[i];j++)
      a[i][j]=1;
    if(r[i]!=w)
      a[i][j]=2;
  }
  int c[w];
  int flag=1;
  for(int i=0;i<w;i++)
    cin>>c[i];
  for(i=0;i<w;i++)
  {
    for(j=0;j<c[i];j++)
    {
      if(a[j][i]==0)
        a[j][i]=1;
      else if(a[j][i]==2){
        flag=0;
        break;
      }
    }
    if(flag==0)
      break;
    if(c[i]!=h&&a[j][i]!=1)
      a[j][i]=2;
    else if(a[j][i]==1){
      flag=0;
      break;
    }

  }
  int count=0;
  unsigned int result=1;
  if(flag==1)
  {
    rep(i,0,h){
      rep(j,0,w){
        if(a[i][j]==0)
          result=(result*2)%1000000007;
      }
    }
    cout<<result<<endl;
  
    /**int temp=1;
    for(int i=0;i<count;i++)
    {
      temp=temp*2;
      if(temp>1000000007)
      {
        result=(result*temp)%1000000007;
        temp=1;
      }**/
    }
  //  result=(result*temp)%1000000007;



  else
    cout<<"0"<<endl;



  /**if(flag==1)
  {
    rep(i,0,h){
      rep(j,0,w){
        cout<<a[i][j];
      }
      cout<<endl;
    }
  }
  else
    cout<<"not posiible"<<endl;**/





	return 0;
}
