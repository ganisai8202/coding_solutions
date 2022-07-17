#include<bits/stdc++.h>

#define int         unsigned long long
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

vector<int> prime(int x)
{
  unordered_set<int> s;
  while(x%2==0)
  {
    s.insert(2);
    x=x/2;
  }
  for(int i=3;i<=sqrt(x);i=i+2)
  {
    while(x%i==0)
    {
      s.insert(i);
      x=x/i;
    }
  }
  if(x>2)
    s.insert(x);
  vector<int> v(s.begin(),s.end());
  return v;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int x,n;
  int final_answer=1;
  cin>>x>>n;
  vector<int> p;
  int answer=1;

  p=prime(x);
  for(int i=1;i<=n;i++){


  answer=1;
/**  for(auto itr:p)
  {
      cout<<itr<<endl;
  }**/
  for(auto itr:p)
  {
    int temp=itr;
    int maxpow=1;
    while(temp<=i)
    {
      if(i%temp==0)
        maxpow=temp;
      temp=temp*itr;
    }
    answer=(answer*maxpow);
  }
  final_answer=(final_answer*answer)%1000000007;
}

  cout<<final_answer<<endl;



	return 0;
}
