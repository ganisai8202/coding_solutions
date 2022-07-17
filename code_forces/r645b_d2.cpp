#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)
      cin>>a[i];
    sort(a.begin(),a.end());
    int count =1;
    int flag=0;
    int ind;
    for(int i=n-1;i>=0;i--)
    {
      if(a[i]<=(i+1)){
        ind=i;
        flag=1;
        break;
      }
    }
    if(flag==0)
      cout<<1<<endl;
    else
      cout<<count+ind+1<<endl;
  }

}
