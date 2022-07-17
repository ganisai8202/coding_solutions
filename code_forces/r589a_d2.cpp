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

  int l,r;
  cin>>l>>r;
  //int x;
  int outer_flag=1;

  for(int i=l;i<=r;i++)
  {
    vector<int> present;
    int temp=i;
    int rem,flag=1;
    while(temp)
    {
      rem=temp%10;
      if(find(present.begin(),present.end(),rem)!=present.end())
      {
        flag=0;
        break;
      }
      else
      {
        present.push_back(rem);
        temp=temp/10;
      }
    }
    if(flag==0)
      continue;
    else{
      cout<<i<<endl;
      outer_flag=0;
      break;
    }

  }
  if(outer_flag==1)
    cout<<"-1"<<endl;



	return 0;
}
